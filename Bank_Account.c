// bank account
#include <stdio.h>
#include <string.h>

#define NAME_SIZE 100
int detail(int ARRAY_SIZE);
void list(int x);
void endresutl(int ARRAY_SIZE);

struct bank_detail
{
    char name[50];
    int money , accnumber , accyear;

};

int main()
{
    struct bank_detail c1, c2, c3, c4, c5;
    struct bank_detail *ptr1, *ptr2, *ptr3, *ptr4, *ptr5;
    ptr1 = &c1, ptr2 = &c2, ptr3 = &c3, ptr4 = &c4, ptr5 = &c5;
    printf("=====================================================\n");
    printf("\t1. Enter new detail of user\n");
    printf("\t2. want to see detail of user\n");
    int choice1;
    printf("*************************************************\n");
    printf("\tchoose any one oppsion : ");
    scanf("%d", &choice1);
    printf("=====================================================\n");
    int x , ARRAY_SIZE;
    if (choice1 == 1)
    {
        list(x);
        printf("\tChoose your Fav. Bank to open New Account :");
        scanf("%d", &x);
        printf("*****************************************************\n");
        if (x == 1)
        {
            // int ARRAY_SIZE;
            printf("Enter the number of user data you want to fill : ");
            scanf("%d", &ARRAY_SIZE);
            detail(ARRAY_SIZE);
            int ARRAY_SIZE;
            endresutl(ARRAY_SIZE);
        }
        if (x == 2)
        {
            // int ARRAY_SIZE;
            printf("Enter the number of user data you want to fill : ");
            scanf("%d", &ARRAY_SIZE);
            detail(ARRAY_SIZE);
            int ARRAY_SIZE;
            endresutl(ARRAY_SIZE);
        }
        if (x == 3)
        {
            // int ARRAY_SIZE;
            printf("Enter the number of user data you want to fill : ");
            scanf("%d", &ARRAY_SIZE);
            detail(ARRAY_SIZE);
            int ARRAY_SIZE;
            endresutl(ARRAY_SIZE);
        }
        if (x == 4)
        {
            // int ARRAY_SIZE;
            printf("Enter the number of user data you want to fill : ");
            scanf("%d", &ARRAY_SIZE);
            detail(ARRAY_SIZE);
            int ARRAY_SIZE;
            endresutl(ARRAY_SIZE);
        }
        if (x == 5)
        {
            // int ARRAY_SIZE;
            printf("Enter the number of user data you want to fill : ");
            scanf("%d", &ARRAY_SIZE);
            detail(ARRAY_SIZE);
            int ARRAY_SIZE;
            endresutl(ARRAY_SIZE);
        }
    }
    if (choice1 == 2)
    {
        // char b1[] = "\tICICI Bnak";
        // char b2[] = "\tHDFC Bnak";
        // char b3[] = "\tPNB Bnak";
        // char b4[] = "\tSBI Bnak";
        // char b5[] = "\tYES Bnak";
        list(x);
        printf("****************************************************\n");
        int a;
        printf("choose any one bank for more detail : ");
        scanf("%d", &a);
        printf("**********************************************\n");
        if (a == 1)
        {
            printf("Here is the list of all user : \n");
            strcpy(ptr1->name, "Devanshu Pandey");
            ptr1->money = 3476;
            ptr1->accnumber = 1830028304;
            ptr1->accyear = 2019;
            printf("\tName is %s\n", c1.name);
            printf("\tAmmount you have in your account is %d\n", c1.money);
            printf("\tYour account Number is %d\n", c1.accnumber);
            printf("\tAccount opening year is %d\n", c1.accyear);
            printf("\n\n");
            endresutl(ARRAY_SIZE);
        }
        if (a == 2)
        {
            printf("here is the list of all user : \n");
            strcpy(ptr2->name, "Kartik");
            ptr2->money = 5273;
            ptr2->accnumber = 1830028304;
            ptr2->accyear = 2018;
            printf("\tName is %s\n", c2.name);
            printf("\tAmmount you have in your account is %d\n", c2.money);
            printf("\tYour account Number is %d\n", c2.accnumber);
            printf("\tAccount opening year is %d\n", c2.accyear);
            printf("\n\n");
            endresutl(ARRAY_SIZE);
        }
        if (a == 3)
        {
            printf("\there is the list of all user : \n");
            strcpy(ptr3->name, "Yash");
            ptr3->money = 2345;
            ptr3->accnumber = 1203734017;
            ptr3->accyear = 2019;
            printf("\tName is %s\n", c3.name);
            printf("\tAmmount you have in your accountis %d\n", c3.money);
            printf("\tYour account Number is %d\n", c3.accnumber);
            printf("\tAccount opening year is %d\n", c3.accyear);
            printf("\n\n");
            endresutl(ARRAY_SIZE);
        }
        if (a == 4)
        {
            printf("Here is the list of all user : \n");
            strcpy(ptr4->name, "Ansh");
            ptr4->money = 1218;
            ptr4->accnumber = 1365858234;
            ptr4->accyear = 2020;
            printf("\tName is %s\n", c4.name);
            printf("\tAmmount you have in your account is %d\n", c4.money);
            printf("\tYour account Number is %d\n", c4.accnumber);
            printf("\tAccount opening year is %d\n", c4.accyear);
            printf("\n\n");
            endresutl(ARRAY_SIZE);
        }
        if (a == 5)
        {
            printf("Here is the list of all user : \n");
            strcpy(ptr5->name, "Vansh");
            ptr5->money = 3642;
            ptr5->accnumber = 1846294734;
            ptr5->accyear = 2005;
            printf("\tName is %s\n", c5.name);
            printf("\tAmmount you have in your account is %d\n", c5.money);
            printf("\tYour account Number is %d\n", c5.accnumber);
            printf("\tAccount opening year is %d\n", c5.accyear);
            printf("\n\n");
            endresutl(ARRAY_SIZE);
        }
        printf("___________________________________________________________\n");
    }
    return 0;
}


void list(int a)
{
    printf("\t1. ICICI BANK\n");
    printf("\t2. HDFC BANK\n");
    printf("\t3. PNB BANK\n");
    printf("\t4. SBI BANK\n");
    printf("\t5. YES BANK\n");
}
int detail(int ARRAY_SIZE)
{
    struct bank_detail user[ARRAY_SIZE];
    for (int index = 0; index < ARRAY_SIZE; ++index)
    {
        printf("Enter details of Employee %d\n\n", index + 1);
        printf("Enter your name: \n");
        fgets(user[index].name, NAME_SIZE, stdin);
        fflush(stdin);
        printf("Enter money number: ");
        scanf("%d", &user[index].money);
        fflush(stdin);
        printf("Enter account number: ");
        scanf("%d", &user[index].accnumber);
        fflush(stdin);
        printf("Enter year : ");
        scanf("%d", &user[index].accyear);
    }
    return 0;
}

void endresutl(int ARRAY_SIZE)
{
    struct bank_detail user[ARRAY_SIZE];
    printf("\n\n");
    for (int index = 0; index < ARRAY_SIZE; ++index)
    {
        printf("User Name : %s\n", user[index].name);
        printf("Account Number : %d\n", user[index].accnumber);
        printf("Money : %d\n", user[index].money);
        printf("Year : %d\n\n", user[index].accyear);
    }
}