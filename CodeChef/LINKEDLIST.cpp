
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

    printf("T")
}
