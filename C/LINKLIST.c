#include<stdio.h>
#include<stdlib.h>
/*
typedef struct
{

}DATA;
struct node;

typedef struct
{
    int count;
    struct node *pos;
    struct node *rear;
} HEADER;
*/
const short STR_MAX = 41;
typedef struct
{
    short year;
    char picture[STR_MAX];
    char director[STR_MAX];
} PICTURE;

int main(void)
{

    // prototype declarations
    void instr(void);
    LIST *buildList(void);
    void process(LIST *list);

    LIST *list;

    instr();
    list = buildList();
    process(list);

    printf("End Best Pictures\n\
           Hope you find your favourite!\n");
    return 0;
}

void instr(void)
{

    printf("This program will print the academy awards \n");
    return;
}

LIST *buildList(void)
{

    FILE *fpData;
    LIST *list;

    short yearIn;
    char picIn[STR_MAX];
    char dirIn[STR_MAX];

    PICTURE *pPic;

    list = createList(cmpYear);

    if (!list)
        printf("\n Cannot create list");
        exit(100);
    fpData = fopen("pictures.dat","r");
    if (!fpData)
        printf("\n Error Opening Input file");
    exit(100);

    while(fscanf(fpData,"%hd",&yearIn)==1)
    {

        if (!(pPic = (PICTURE *)malloc(sizeof(PICTURE))))
        {
              printf("\a Out of memory in build list \n");
              exit(100);
        }
        pPic->year = yearIn;

        // part to skip tabs and quotes
        while((fgetc(fpData))!='\t');
        while((fgetc(fpData))!='"');

        fscanf(fpData,"%40[^\"],%*c",pPic->picture);
        while((fgetc(fpData))!='\t');
        while((fgetc(fpData))!='"');


    }
}















