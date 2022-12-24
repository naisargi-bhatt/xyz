#include<stdio.h>
#include<string.h>
struct book
{
    char book_name[20];
    char author_name[20];
    float amount;
}b1;
void details(struct book b1);
int main()
{
    struct book b1;
    details (b1);
    return 0;
}
void details(struct book b1)
{

printf("Enter the book name: ");
gets(b1.book_name);
printf("Enter author name: ");
gets(b1.author_name);
printf("Enter the amount of the book: ");
scanf("%f",&b1.amount);
fflush(stdin);

printf("\n---------------------BOOK DETAILS------------------------\n");

printf("Book name: %s\n",b1.book_name);
printf("Issue date: %s\n",b1.author_name);
printf("Price : %.2f\n",b1.amount);
printf("this program is prepared by 22CE007-Naisargi Bhatt");
}

