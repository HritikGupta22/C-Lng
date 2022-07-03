#include<stdio.h>
#include<string.h>
struct Books{
    char name[50];
    char author[50];
    char price;
}book;

void printstruct(struct Books bk){
    printf("book name is %s\n", bk.name);
    printf("author name is %s\n", bk.author);
    printf("book price is %d\n", bk.price);
}
int main()
{
    struct Books bk1,bk2;
    strcpy(bk1.name, "c programing");
    strcpy(bk1.author, "Denis ritchie");
    bk1.price=78;
    printstruct(bk1);
    return 0;
}