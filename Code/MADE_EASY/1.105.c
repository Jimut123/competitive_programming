#include <stdio.h>
#include <unistd.h>
#include <termios.h>

int display();
int (*array[3])();
int (*(*ptr)[3])();

char getch(void)
{
    char buf = 0;
    struct termios old = {0};
    fflush(stdout);
    if(tcgetattr(0, &old) < 0)
        perror("tcsetattr()");
    old.c_lflag &= ~ICANON;
    old.c_lflag &= ~ECHO;
    old.c_cc[VMIN] = 1;
    old.c_cc[VTIME] = 0;
    if(tcsetattr(0, TCSANOW, &old) < 0)
        perror("tcsetattr ICANON");
    if(read(0, &buf, 1) < 0)
        perror("read()");
    old.c_lflag |= ICANON;
    old.c_lflag |= ECHO;
    if(tcsetattr(0, TCSADRAIN, &old) < 0)
        perror("tcsetattr ~ICANON");
    printf("%c\n", buf);
    return buf;
 }



int main()
{
	array[0] = display;
	array[1] = (char) getch();
	ptr = &array;
	printf("%d",(**ptr)());
	(*(*ptr+1))();
	return 0;
}

int display()
{
	int x = 5;
	return x++;
}

