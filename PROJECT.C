#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
struct person
{
    char name [35];
    char address[50];
    char father_name[35];
    char mother_name[30];
    long int mble_no;
    char sex[8];
    char mail[100];
    char citizen_no[20];
}
void menu();
void got();
void start();
void back();
void addrecord();
void listrecord();
void modifyrecord();
void deleterecord();
void searchrecord();
int main()
{
    system("color 5f");
    start();
    return 0;
}
void back()
{
    start();
}
void start()
{
    menu();
}
void menu()
{
    system("cls");
    printf("\t\t**********WELCOME TO PHONEBOOK**************");
    
    printf("\n\n\t\t\t  MENU\t\t\n\n");
    printf("\t1.Add New    \t2.List    \t3.Exit    \n\t4.modify \t5.Search\t6.Delete");

    switch()
    {
        case '1':

                    addrecord();
                    break;
        case '2':

                    listrecord();
                    break;
        case '3':

                    exit(0);
                    break;
        case '4':

                    modifyrecord();
                    break;
        case '5':

                    searchrecord();
                    break;
        case '6':

                    deleterecord();
                    break;
        default:

                    system("cls");
                    printf("\nEnter 1 to 6 only");
                    printf("\n Enter any key");
                    getch();

    menu();
    
    }
}
void addrecord()
{
        system("cls");
        FILE *f;
        struct person p;
        f=fopen("project","ab+");
        printf("\n Enter name: ");
        got(p.name);
        printf("\n Enter the address: ");
        got(p.address);
        printf("\n Enter father name: "   );
        got(p.father_name);
        printf("\n Enter ,mother_name: ");
        got(p.mother_name);
        printf("\n Enter phone no.:");
        scanf("%ld",&p.mble_no);
        printf("Enter sex:");
        got(p.mail);
        printf("\n Enter citizen no:");
        got(p.citizen_no);
        fwrite((&p,sizeof(p),1,f));

    fflush(stdin);
        printf("\nrecord saved");

    fclose(f);
        
        printf("\n\nEnter any key");

            getch();
        system("cls");
        menu();

}
void listrecord()
{
    struct person p;
    FILE *f;

    f=fopen("project","rb");
    if(f==NULL)
    {
        printf("\nfile opening error in listing:");

        exit(1);

    }
    while(fread(&p,sizeof(p),1,f)==1)
    {
            printf("\n\n\n YOUR RECORD IS \n\n ");
                printf("\nName=%s\nAdress=%s\nfather name=%s\nMother name=%s\nMobile no=%ld\nSex=%s\nE-)
    }
}