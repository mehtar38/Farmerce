#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
struct login
{
    char user[10];
    char pass[10];
    char fname[20];
    char lname[20];
}l;
int payment(int*);

void main()
{
    printf("\t\t\t\t---------------Welcome to 'FARMERCE'---------------");

    int x, y, n, work, code, work2, code2, input, yes_no;
    char username[20], password[10];
    int choice, choice2, choice3;

    int login;
    int vt2 =10, vt4 = 10, vt6 = 10, vt8 = 10, vt10 = 10, vt12 = 10, vt14 = 10, vt16 = 10, vt18 = 10, vt19 = 10, vt20 = 10;
    int vt1=10, vt3 = 10, vt5 = 10, vt7 = 10, vt9 = 10, vt11 = 10, vt13 = 10, vt15 = 10, vt17 = 10, vt21 =10, vt22 =10;
    int qt2 =10, qt4 = 10, qt6 = 10, qt8 = 10, qt10 = 10, qt12 = 10, qt14 = 10, qt16 = 10, qt18 = 10, qt20=10;
    int qt1=10, qt3 = 10, qt5 = 10, qt7 = 10, qt9 = 10, qt11 = 10, qt13 = 10, qt15 = 10, qt17 = 10, qt21=10, qt19=10;
    int ftot=0,fp1=0, fp2=0, fp3=0, fp4=0, fp5=0, fp6=0, fp7=0, fp8=0, fp9=0, fp10=0, fp11=0, fp12=0, fp13=0, fp14=0, fp15=0, fp16=0, fp17=0;
    int fp18=0, fp19=0, fp20=0, fp21=0, fp22=0, fp23=0, fp24=0, fp25=0, fp26=0, fp27=0, fp28=0, fp29=0, fp30=0, fp31=0, fp32=0, fp33=0, fp34=0;
    int fp35=0, fp36=0, fp37=0, fp38=0, fp39=0, fp40=0, fp41=0, fp42=0, fp43=0;
    any_login:

printf("\n\n1. Register\t2. Login\t");
scanf("%d", &login);
getchar();

if (login == 1)
{
    //system("CLS");
    printf("\nEnter your first name: ");
    scanf("%s" ,l.fname);
    printf("\nEnter last name: ");
    scanf("%s", l.lname);
    printf("\nUsername: ");
    scanf("%s", l.user);
    printf("Password: ");
    scanf("%s", l.pass);
    printf("\nAccount creation successful!");
    printf("\nThank You for registering with us!");
    printf("\nKindly login to continue");
    goto any_login;

}
if (login == 2)
{
    //system("CLS");
    printf("\n1. Farmer\n2. Customer");
    scanf("%d", &input);

    if (input == 1)
    {
         arrey_yaar2:
         printf("\nUsername: ");
         scanf("%s", &username);
         printf("\nPassword: ");
         scanf("%s", &password);

         if (strcmp(username,"kisan")== 0)
         {
             if (strcmp(password,"bihar")== 0)
             {
                 printf("\nWelcome back Mr. Singh");
                 printf("\nYour account no. is: 123456789");
                 printf("\nYour IFSC code is: 22200");
                 printf("\nIf your details are correct, Enter '1'");
                 printf("\nIf not Enter '2'\n");
                 scanf("%d", &yes_no);
                 if (yes_no == 1)
                 {
                     //system("CLS");
                     goto farmer_login;
                 }
                 else
                 {
                     printf("\nPlease re-enter your details.");
                     goto arrey_yaar2;
                 }
             }
             else
             {
                 printf("\nEnter wrong password");
             }
         }
         else
         {
             printf("\nUser doesn't exist");
         }
         goto arrey_yaar2;
    }
    else
    {

    arrey_yaar:
    printf("\nUsername: ");
    scanf("%s", &username);
    printf("\nPassword: ");
    scanf("%s", &password);

    if(strcmp(username,l.user)==0)
        {
        if(strcmp(password,l.pass)==0)
        {
        printf("\nLogin Successful.!");
        printf("\nWelcome %s", l.fname);
        goto user_login;
        }
        else
            {
                printf("\nwrong password");
            }
        }
    else
        {
    printf("\nUser doesn't exist :( ");
        }
    goto arrey_yaar;
    }


}



int action, s;


user_login:
    //system("CLS");
    printf("\n\nWe've got a variety of products for you.");
    printf("\n\nChoose at your convenience :) ");
    printf("\n\nEnter the code of the product you want to choose.");

    int items;
    int fav;

    int b1=0, b2=0, b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,b10=0,b11=0,b12=0,b13=0,b14=0,b15=0,b16=0,b17=0, b18=0, b19=0, b20=0, b21=0;
    int v1=0, v2=0, v3=0,v4=0,v5=0,v6=0,v7=0,v8=0,v9=0,v10=0,v11=0,v12=0,v13=0,v14=0,v15=0,v16=0,v17=0, v18=0 ,v19=0, v20=0, v21=0, v22=0, v23=0;
    int ctr1=0,ctr2=0,ctr3=0,ctr4=0,ctr5=0,ctr6=0,ctr7=0,ctr8=0,ctr9=0,ctr10=0,ctr11=0,ctr12=0,ctr13=0,ctr14=0,ctr15=0,ctr16=0,ctr17=0;
    int ctr18=0,ctr19=0,ctr20=0,ctr21=0,ctr22=0,ctr23=0,ctr24=0,ctr25=0,ctr26=0,ctr27=0,ctr28=0,ctr29=0;
    int ctr30=0,ctr31=0,ctr32=0,ctr33=0,ctr34=0, ctr35 = 0, ctr36=0, ctr37=0, ctr38=0, ctr39=0, ctr40=0, ctr41=0, ctr42=0, ctr43=0;

    again:

    printf("\n\nWhat do you want to buy? \n1. Fruits\t\t2. Vegetables\n");
    scanf("%d", &fav);

    int fruits, vegies;
    char  opt1 = 'c', opt2 = 'c';
    char gradef = 'c', gradev = 'c';

    switch(fav)
    {
        case 1:
            printf("\nFun fact: Figs are believed to be the first cultivated fruit! ");
    list1:
        printf("\n\nSelect whatever you to want to add to your cart: ");

    printf("\nProducts: \t\t\t Price per kg:\n ");
    printf("\n------Grade 1:----- \n");
    printf("\n1. Apples: \t\t\t Rs. 44");
    printf("\n2. Apricots: \t\t\t Rs. 101");
    printf("\n3. Avocados: \t\t\t Rs. 56 (per piece)");
    printf("\n4. Bananas: \t\t\t Rs. 24 (per piece)");
    printf("\n5. Custard Apple: \t\t Rs. 115");
    printf("\n6. Grapes: \t\t\t Rs. 76");
    printf("\n7. Guava: \t\t\t Rs. 99");
    printf("\n8. Lychee: \t\t\t Rs. 127 (per dozen)");
    printf("\n9. Mango (ripe): \t\t Rs. 500 (per dozen)");
    printf("\n10. Mango (unripe): \t\t Rs. 400 (per dozen)");
    printf("\n11. Orange: \t\t\t Rs. 89");
    printf("\n12. Papaya: \t\t\t Rs. 105");
    printf("\n13. Pears: \t\t\t Rs. 106");
    printf("\n14. Pineapples: \t\t Rs. 69 (per piece)");
    printf("\n15. Pomegranates: \t\t Rs. 88");
    printf("\n16. Sweet lime: \t\t Rs. 65 (per dozen)");
    printf("\n17. Watermelons: \t\t Rs. 127\n");
    printf("\n------Grade 2:------\n ");
    printf("\n35. Grapes: \t\t\tRs. 65");
    printf("\n36. Ripe Mango: \t\tRs. 450");
    printf("\n37. Unripe Mango:\t\tRs. 370");
    printf("\n38. Watermelon:\t\t\tRs. 114\n");

    scanf("%d", &fruits);
    goto fr;
    break;

case 2:
    list2:
    printf("\n\nFun fact: Potato is the first vegetable to be grown in space!");
    printf("\n\nSelect whatever you to want to add to your cart: ");
    printf("\n\nProducts: \t\t\t  Price per kg:\n ");
    printf("\n-----Grade 1:------\n");
    printf("\n1. Bitter gourd: \t\t 50");
    printf("\n2. Bottle gourd: \t\t 80");
    printf("\n3. Brinjal: \t\t\t 70");
    printf("\n4. Cabbage: \t\t\t 60");
    printf("\n5. Capsicum: \t\t\t 80");
    printf("\n6. Cauliflower: \t\t 80");
    printf("\n7. Garlic: \t\t\t 200");
    printf("\n8. Ginger: \t\t\t 100");
    printf("\n9. Green Peas: \t\t\t 70");
    printf("\n10. Lady finger: \t\t 80");
    //printf("\n11. Ivy gourd: \t\t\t\t\t 100 ");
    printf("\n12. Spinach: \t\t\t 20");
    printf("\n13. Potato: \t\t\t 30");
    printf("\n14. Pumpkin: \t\t\t 40");
    printf("\n15. Onion: \t\t\t 40");
    printf("\n16. Sweet Potato: \t\t 50");
    printf("\n17. Whole corn: \t\t 42\n");
    printf("\n------Grade 2:------\n ");
    printf("\n39.Cabbage: \t\t\tRs. 45");
    printf("\n40.Garlic: \t\t\tRs. 180");
    printf("\n41.Green Peas: \t\t\tRs. 55");
    printf("\n42.Potato: \t\t\tRs. 20");
    printf("\n43.Onion: \t\t\tRs. 30\n");
    scanf("%d", &vegies);
    goto vr;
    break;

    }

  int q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12, q13, q14, q15, q16, q17, bill=0;
  int q18, q19, q20, q21, q22, q23, q24, q25, q26, q27, q28, q29, q30, q31, q32, q33, q34;
  int q35, q36, q37, q38, q39, q40, q41, q42, q43;

  int fbill=0, vbill = 0, final_bill=0; // total_cost;
  fr:
    switch (fruits)
    {
        case 1:
            printf("\nKilograms available are: %d", qt1);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q1);
            if (q1 > qt1)
            {
                printf("\nQuantity of %d is not available", q1);
                printf("Please re-enter the value: ");
                scanf("%d", &q1);
            }
            qt1 = qt1 - q1;
            if(qt1<10)
            {
                ctr1++;
            }
            goto bi1;
            end1:
            break;

        case 2:
            printf("\nKilograms available are: %d", qt2);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q2);
            if (q2 > qt2)
            {
                printf("\nQuantity of %d is not available", q2);
                printf("Please re-enter the value: ");
                scanf("%d", &q2);
            }
            qt2 = qt2 - q2;
            if(qt2<10)
            {
                ctr2++;
            }
            goto bi2;
            end2:
            break;

        case 3:
            printf("\nPieces available are: %d", qt3);
            printf("\nHow many pieces would you like to order? ");
            scanf("%d", &q3);
            if (q3 > qt3)
            {
                printf("\nQuantity of %d is not available", q3);
                printf("Please re-enter the value: ");
                scanf("%d", &q3);
            }
            qt3 = qt3 - q3;
            if(qt3<10)
            {
                ctr3++;
            }
            goto bi3;
            end3:
            break;

         case 4:
            printf("\nPieces available are: %d", qt4);
            printf("\nHow many pieces would you like to order? ");
            scanf("%d", &q4);
            if (q4 > qt4)
            {
                printf("\nQuantity of %d is not available", q4);
                printf("Please re-enter the value: ");
                scanf("%d", &q4);
            }
            qt4 = qt4 - q4;
            if(qt4<10)
            {
                ctr4++;
            }
            goto bi4;
            end4:
            break;

        case 5:
            printf("\nKilograms available are: %d", qt5);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q5);
            if (q5 > qt5)
            {
                printf("\nQuantity of %d is not available", q5);
                printf("Please re-enter the value: ");
                scanf("%d", &q5);
            }
            qt5 = qt5 - q5;
            if(qt5<10)
            {
                ctr5++;
            }
            goto bi5;
            end5:
            break;

        case 6:
            printf("\nKilograms available are: %d", qt6);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q6);
            if (q6 > qt6)
            {
                printf("\nQuantity of %d is not available", q6);
                printf("Please re-enter the value: ");
                scanf("%d", &q6);
            }
            qt6 = qt6 - q6;
            if(qt6<10)
            {
                ctr6++;
            }
            goto bi6;
            end6:
            break;

        case 7:
            printf("\nKilograms available are: %d", qt7);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q7);
            if (q7 > qt7)
            {
                printf("\nQuantity of %d is not available", q7);
                printf("Please re-enter the value: ");
                scanf("%d", &q7);
            }
            qt7 = qt7 - q7;
            if(qt7<10)
            {
                ctr7++;
            }
            goto bi7;
            end7:
            break;

        case 8:
            printf("\nKilograms available are: %d", qt8);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q8);
            if (q8 > qt8)
            {
                printf("\nQuantity of %d is not available", q8);
                printf("Please re-enter the value: ");
                scanf("%d", &q8);
            }
            qt8 = qt8 - q8;
            if(qt8<10)
            {
                ctr8++;
            }
            goto bi8;
            end8:
            break;

        case 9:
            printf("\nDozens available are: %d", qt9);
            printf("\nHow many dozens would you like to order? ");
            scanf("%d", &q9);
            if (q9 > qt9)
            {
                printf("\nQuantity of %d is not available", q9);
                printf("Please re-enter the value: ");
                scanf("%d", &q9);
            }
            qt9 = qt9 - q9;
            if(qt9<10)
            {
                ctr9++;
            }
            goto bi9;
            end9:
            break;

        case 10:
            printf("\nDozens available are: %d", qt10);
            printf("\nHow many dozens would you like to order? ");
            scanf("%d", &q10);
            if (q10 > qt10)
            {
                printf("\nQuantity of %d is not available", q10);
                printf("Please re-enter the value: ");
                scanf("%d", &q10);
            }
            qt10 = qt10 - q10;
            if(qt10<10)
            {
                ctr10++;
            }
            goto bi10;
            end10:
            break;

        case 11:
            printf("\nKilograms available are: %d", qt11);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q11);
            if (q11 > qt11)
            {
                printf("\nQuantity of %d is not available", q11);
                printf("Please re-enter the value: ");
                scanf("%d", &q11);
            }
            qt11 = qt11 - q11;
            if(qt11<10)
            {
                ctr11++;
            }
            goto bi11;
            end11:
            break;

        case 12:
            printf("\nKilograms available are: %d", qt12);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q12);
            if (q12 > qt12)
            {
                printf("\nQuantity of %d is not available", q12);
                printf("Please re-enter the value: ");
                scanf("%d", &q12);
            }
            qt12 = qt12 - q12;
            if(qt12<10)
            {
                ctr12++;
            }
            goto bi12;
            end12:
            break;

        case 13:
            printf("\nKilograms available are: %d", qt13);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q13);
            if (q13 > qt13)
            {
                printf("\nQuantity of %d is not available", q13);
                printf("Please re-enter the value: ");
                scanf("%d", &q13);
            }
            qt13 = qt13 - q13;
            if(qt13<10)
            {
                ctr13++;
            }
            goto bi13;
            end13:
            break;

        case 14:
            printf("\nPieces available are: %d", qt14);
            printf("\nHow many pieces would you like to order? ");
            scanf("%d", &q14);
            if (q14 > qt14)
            {
                printf("\nQuantity of %d is not available", q14);
                printf("Please re-enter the value: ");
                scanf("%d", &q14);
            }
            qt14 = qt14 - q14;
            if(qt14<10)
            {
                ctr14++;
            }
            goto bi14;
            end14:
            break;

        case 15:
            printf("\nKilograms available are: %d", qt15);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q15);
            if (q15 > qt15)
            {
                printf("\nQuantity of %d is not available", q15);
                printf("Please re-enter the value: ");
                scanf("%d", &q15);
            }
            qt15 = qt15 - q15;
            if(qt15<10)
            {
                ctr15++;
            }
            goto bi15;
            end15:
            break;

        case 16:
            printf("\nKilograms available are: %d", qt16);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q16);
            if (q16 > qt16)
            {
                printf("\nQuantity of %d is not available", q16);
                printf("Please re-enter the value: ");
                scanf("%d", &q16);
            }
            qt16 = qt16 - q16;
            if(qt16<10)
            {
                ctr16++;
            }
            goto bi16;
            end16:
            break;

        case 17:
            printf("\nKilograms available are: %d", qt17);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q17);
            if (q17 > qt17)
            {
                printf("\nQuantity of %d is not available", q17);
                printf("Please re-enter the value: ");
                scanf("%d", &q17);
            }
            qt17 = qt17 - q17;
            printf("%d", qt17);
            if(qt17<10)
            {
                ctr17++;
            }
            goto bi17;
            end17:
            break;

        case 35:
            printf("\nKilograms available are: %d", qt18);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q35);
            if (q35 > qt18)
            {
                printf("\nQuantity of %d is not available", q35);
                printf("Please re-enter the value: ");
                scanf("%d", &q35);
            }
            qt18 = qt18 - q35;
            if(qt18<10)
            {
                ctr35++;
            }
            goto bi18;
            end35:
            break;

        case 36:
            printf("\nDozens available are: %d", qt19);
            printf("\nHow many dozens would you like to order? ");
            scanf("%d", &q36);
            if (q36 > qt19)
            {
                printf("\nQuantity of %d is not available", q36);
                printf("Please re-enter the value: ");
                scanf("%d", &q36);
            }
            qt19 = qt19 - q36;
            if(qt19<10)
            {
                ctr36++;
            }
            goto bi19;
            end36:
            break;

        case 37:
            printf("\nDozens available are: %d", qt20);
            printf("\nHow many dozens would you like to order? ");
            scanf("%d", &q37);
            if (q37 > qt20)
            {
                printf("\nQuantity of %d is not available", q37);
                printf("Please re-enter the value: ");
                scanf("%d", &q37);
            }
            qt20 = qt20 - q37;
            if(qt20<10)
            {
                ctr37++;
            }
            goto bi20;
            end37:
            break;

        case 38:
            printf("\nKilograms available are: %d", qt21);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q38);
            if (q38 > qt21)
            {
                printf("\nQuantity of %d is not available", q38);
                printf("Please re-enter the value: ");
                scanf("%d", &q38);
            }
            qt21 = qt21 - q38;
            if(qt21<10)
            {
                ctr38++;
            }
            goto bi21;
            end38:
            break;
    }
    vr:
    switch (vegies)
    {
        case 1:
            printf("\nKilograms available are: %d", vt1);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q18);
            vt1 = vt1 - q18;
            if(vt1<10)
            {
                ctr18++;
            }
            goto vi1;
            end18:
            break;

        case 2:
            printf("\nKilograms available are: %d", vt2);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q19);
            vt2 = vt2 - q19;
            if(vt2<10)
            {
                ctr19++;
            }
            goto vi2;
            end19:
            break;

        case 3:
            printf("\nKilograms available are: %d", vt3);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q20);
            vt3 = vt3 - q20;
            if(vt3<10)
            {
                ctr20++;
            }
            goto vi3;
            end20:
            break;

         case 4:
            printf("\nKilograms available are: %d", vt4);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q21);
            vt4 = vt4 - q21;
            if(vt4<10)
            {
                ctr21++;
            }
            goto vi4;
            end21:
            break;

        case 5:
            printf("\nKilograms available are: %d", vt5);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q22);
            vt5 = vt5 - q22;
            if(vt5<10)
            {
                ctr22++;
            }
            goto vi5;
            end22:
            break;

        case 6:
            printf("\nKilograms available are: %d", vt6);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q23);
            vt6 = vt6 - q23;
            if(vt6<10)
            {
                ctr23++;
            }
            goto vi6;
            end23:
            break;

        case 7:
            printf("\nKilograms available are: %d", vt7);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q24);
            vt7 = vt7 - q24;
            if(vt7<10)
            {
                ctr24++;
            }
            goto vi7;
            end24:
            break;

        case 8:
            printf("\nKilograms available are: %d", vt8);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q25);
            vt8 = vt8 - q25;
            if(vt8<10)
            {
                ctr25++;
            }
            goto vi8;
            end25:
            break;

        case 9:
            printf("\nKilograms available are: %d", vt9);
            printf("\nHow many dozens would you like to order? ");
            scanf("%d", &q26);
            vt9 = vt9 - q26;
            if(vt9<10)
            {
                ctr26++;
            }
            goto vi9;
            end26:
            break;

        case 10:
            printf("\nKilograms available are: %d", vt10);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q27);
            vt10 = vt10 - q27;
            if(vt10<10)
            {
                ctr27++;
            }
            goto vi10;
            end27:
            break;

       /* case 11:
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q28);
            vt11 = vt11 - q28;
            if(vt11<10)
            {
                ctr28++;
            }
            goto vi11;
            end28:
            break; */

        case 12:
            printf("\nKilograms available are: %d", vt12);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q29);
            vt12 = vt12 - q29;
            if(vt12<10)
            {
                ctr29++;
            }
            goto vi12;
            end29:
            break;

        case 13:
            printf("\nKilograms available are: %d", vt13);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q30);
            vt13 = vt13 - q30;
            if(vt13<10)
            {
                ctr30++;
            }
            goto vi13;
            end30:
            break;

        case 14:
            printf("\nKilograms available are: %d", vt14);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q31);
            vt14 = vt14 - q31;
            if(vt14<10)
            {
                ctr31++;
            }
            goto vi14;
            end31:
            break;

        case 15:
            printf("\nKilograms available are: %d", vt15);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q32);
            vt15 = vt15 - q32;
            if(vt15<10)
            {
                ctr32++;
            }
            goto vi15;
            end32:
            break;

        case 16:
            printf("\nKilograms available are: %d", vt16);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q33);
            vt16 = vt16 - q33;
            if(vt16<10)
            {
                ctr33++;
            }
            goto vi16;
            end33:
            break;

        case 17:
            printf("\nKilograms available are: %d", vt17);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q34);
            vt17 = vt17 - q34;
            if(vt17<10)
            {
                ctr34++;
            }
            goto vi17;
            end34:
            break;

        case 39:
            printf("\nKilograms available are: %d", vt18);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q39);
            vt18 = vt18 - q39;
            if(vt18<10)
            {
                ctr39++;
            }
            goto vi18;
            end39:
            break;

        case 40:
            printf("\nKilograms available are: %d", vt19);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q40);
            vt19 = vt19 - q40;
            if(vt19<10)
            {
                ctr40++;
            }
            goto vi19;
            end40:
            break;

        case 41:
            printf("\nKilograms available are: %d", vt20);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q41);
            vt20 = vt20 - q41;
            if(vt20<10)
            {
                ctr41++;
            }
            goto vi20;
            end41:
            break;

        case 42:
            printf("\nKilograms available are: %d", vt21);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q42);
            vt21 = vt21 - q42;
            if(vt21<10)
            {
                ctr42++;
            }
            goto vi21;
            end42:
            break;

        case 43:
            printf("\nKilograms available are: %d", vt22);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &q43);
            vt22 = vt22 - q43;
            if(vt22<10)
            {
                ctr43++;
            }
            goto vi22;
            end43:
            break;

    }

    cart_again:
    printf("\n\nChoose your preferred action:\n ");

    printf("\na. Continue shopping fruits");
    printf("\nb. Continue shopping vegetables");
    printf("\nc. Go to the cart");
    printf("\nd. Final bill");
    printf("\ne. Logout");
    scanf("\n%s", &opt1);

    switch (opt1)
    {

    case 'a':
        goto list1;
        break;

    case 'b':
        goto list2;
        break;

    case 'c':
        goto cart;
        break;

    case 'd':
        goto total_cost;
        break;
    case 'e':
        goto any_login;
        break;
    }

  cart:
     printf("\n\nWelcome to your cart!");
     printf("\nThe items in your cart are:\n ");
     printf("\nCode\tItem\t\t\tQuantity\tAmount");
    if(ctr1 != 0)
    {
        printf("\n1.\tApples\t\t\t%d\t\t%d", q1, b1);
    }
    if(ctr2 != 0)
    {
        printf("\n2.\tApricots\t\t %d\t\t\t%d", q2, b2);
    }
    if(ctr3 !=0 )
    {
        printf("\n3.\tAvocados\t\t%d\t\t%d", q3, b3);
    }
    if(ctr4 != 0)
    {
        printf("\n4. \tBananas\t\t\t%d\t\t%d", q4, b4);
    }
    if(ctr5!=0)
    {
        printf("\n5. \tCustard Apple\t\t%d\t\t%d", q5, b5);
    }
    if(ctr6 != 0)
    {
        printf("\n6. \tGrapes\t\t\t%d\t\t%d", q6, b6);
    }
    if(ctr7 != 0)
    {
        printf("\n7.\tGuava\t\t\t%d\t\t%d", q7, b7);
    }
    if(ctr8 != 0)
    {
        printf("\n8.\tLychee\t\t\t%d\t\t%d", q8, b8);
    }
    if(ctr9 != 0)
    {
        printf("\n9. \tRipe Mango\t\t%d\t\t%d", q9, b9);
    }
    if(ctr10 != 0)
    {
        printf("\n10. \tUnripe Mango\t\t%d\t\t%d", q10, b10);
    }
    if(ctr11 != 0)
    {
        printf("\n11. \tOrange\t\t\t%d\t\t%d", q11, b11);
    }
    if(ctr12 != 0)
    {
        printf("\n12. \tPapaya\t\t\t%d\t\t%d", q12, b12);
    }
    if(ctr13 != 0)
    {
        printf("\n13. \tPear\t\t\t%d\t\t%d", q13, b13);
    }
    if(ctr14!= 0)
    {
        printf("\n14. \tPineapple\t\t%d\t\t%d", q14, b14);
    }
    if(ctr15!= 0)
    {
        printf("\n15. \tPomegranate\t\t\t%d\t\t%d", q15, b15);
    }
    if(ctr16!= 0)
    {
        printf("\n16. \tSweet lime\t\t%d\t\t%d", q16, b16);
    }
    if(ctr17!= 0)
    {
        printf("\n17. \tWatermelon\t\t%d\t\t%d", q17, b17);
    }
    if(ctr18 != 0)
    {
        printf("\n18.\tBitter Gourd\t\t\t%d\t\t%d", q18, v1);
    }
    if(ctr19 != 0)
    {
        printf("\n19.\tBottle Gourd\t\t %d\t\t\t%d", q19, v2);
    }
    if(ctr20 !=0 )
    {
        printf("\n20.\tBrinjal\t\t\t%d\t\t%d", q20, v3);
    }
    if(ctr21!= 0)
    {
        printf("\n21. \tCabbage\t\t\t%d\t\t%d", q21, v4);
    }
    if(ctr22!= 0)
    {
        printf("\n22. \tCapsicum \t\t%d\t\t%d", q22, v5);
    }
    if(ctr23!= 0)
    {
        printf("\n23. \tCauliflower\t\t\t%d\t\t%d", q23, v6);
    }
    if(ctr24!= 0)
    {
        printf("\n24.\tGarlic\t\t\t%d\t\t%d", q24, v7);
    }
    if(ctr25!= 0)
    {
        printf("\n25.\tGinger\t\t\t%d\t\t%d", q25, v8);
    }
    if(ctr26!= 0)
    {
        printf("\n26. \tGreen Peas\t\t%d\t\t%d", q26, v9);
    }
    if(ctr27!= 0)
    {
        printf("\n27. \tLady finger\t\t%d\t\t%d", q27, v10);
    }
    if(ctr28!= 0)
    {
        printf("\n28. \tIvy Gourd\t\t\t%d\t\t%d", q28, v11);
    }
    if(ctr29!= 0)
    {
        printf("\n29. \tSpinach\t\t\t%d\t\t%d", q29, v12);
    }
    if(ctr30!= 0)
    {
        printf("\n30. \tPotato\t\t\t%d\t\t%d", q30, v13);
    }
    if(ctr31!= 0)
    {
        printf("\n31. \tPumpkin\t\t\t%d\t\t%d", q31, v14);
    }
    if(ctr32!= 0)
    {
        printf("\n32. \tOnion\t\t%d\t\t%d", q32, v15);
    }
    if(ctr33!= 0)
    {
        printf("\n33. \tSweet potato\t\t%d\t\t%d", q33, v16);
    }
    if(ctr34!= 0)
    {
        printf("\n34. \tWhole corn\t\t%d\t\t%d", q34, v17);
    }
    if(ctr35!= 0)
    {
        printf("\n35. \tGrapes-Grade 2\t\t%d\t\t%d", q35, b18);
    }
    if(ctr36!= 0)
    {
        printf("\n36. \tRipe mangoes-Grade 2\t%d\t\t%d", q36, b19);
    }
    if(ctr37!= 0)
    {
        printf("\n37. \tUnripe mangoes-Grade 2\t%d\t\t%d", q37, b20);
    }
    if(ctr38!= 0)
    {
        printf("\n38. \tWatermelon-Grade2\t%d\t\t%d", q38, b21);
    }
    if(ctr39!= 0)
    {
        printf("\n39. \tCabbage-Grade 2\t\t%d\t\t%d", q39, v18);
    }
    if(ctr40!= 0)
    {
        printf("\n40. \tGarlic-Grade 2\t\t%d\t\t%d", q40, v19);
    }
    if(ctr41!= 0)
    {
        printf("\n41. \tGreen Peas-Grade 2\t%d\t\t%d", q41, v20);
    }
    if(ctr42!= 0)
    {
        printf("\n42. \tPotato-Grade 2\t\t%d\t\t%d", q42, v21);
    }
    if(ctr43!= 0)
    {
        printf("\n43. \tOnion-Grade 2\t\t%d\t\t%d", q43, v22);
    }


     printf("\n\nWhat do you wish to do?");
     printf("\na. Add another product \nb. Remove a product\nc. Generate the bill\n");
     scanf("%s", &opt2);

     switch (opt2)
     {
     case 'a':
         goto again;
         break;

     case 'b':
         goto remove;
         break;

     case 'c':
        printf("\n\nOur AI doesn't believe in bargaining!\n");
        goto total_cost;
        break;


     }


    bi1:
        printf("\n%d kgs of Apples have been added to your cart!", q1);
        b1 = q1*44;
        printf("\nYour bill is: %d", b1);
        goto end1;

    bi2:
        printf("\n%d kgs of Apricots have been added to your cart!", q2);
        b2 = q2*101;
        printf("\nYour bill is: %d", b2);
        goto end2;

    bi3:
        printf("\n%d kgs of Avocados have been added to your cart!", q3);
        b3 = q3*101;
        printf("\nYour bill is: %d", b3);
        goto end3;


    bi4:
        printf("\n%d pieces of Bananas have been added to your cart!", q4);
        b4 = q4*24;
        printf("\nYour bill is: %d", b4);
        goto end4;


    bi5:
        printf("\n%d kgs of Custard apples have been added to your cart!", q5);
        b5 = q5*115;
        printf("\nYour bill is: %d", b5);
        goto end5;


    bi6:
        printf("\n%d kgs of Grapes have been added to your cart!", q6);
        b6 = q6*76;
        printf("\nYour bill is: %d", b6);
        goto end6;

    bi7:
        printf("\n%d kgs of Guavas have been added to your cart!", q7);
        b7 = q7*99;
        printf("\nYour bill is: %d", b7);
        goto end7;

    bi8:
        printf("\n%d kgs of Lychee have been added to your cart!", q8);
        b8 = q8*127;
        printf("\nYour bill is: %d", b8);
        goto end8;


    bi9:
        printf("\n%d dozen of Mango (ripe) have been added to your cart!", q9);
        b9 = q9*500;
        printf("\nYour bill is: %d", b9);
        goto end9;


    bi10:
        printf("\n%d dozen of Mango (unripe) have been added to your cart!", q10);
        b10 = q10*400;
        printf("\nYour bill is: %d", b10);
        goto end10;


    bi11:
        printf("\n%d kgs of Oranges have been added to your cart!", q11);
        b11 = q11*89;
        printf("\nYour bill is: %d", b11);
        goto end11;


    bi12:
        printf("\n%d kgs of Papayas have been added to your cart!", q12);
        b12 = q12*105;
        printf("\nYour bill is: %d", b12);
        goto end12;


    bi13:
        printf("\n%d kgs of pears have been added to your cart!", q13);
        b13 = q13*106;
        printf("\nYour bill is: %d", b13);
        goto end13;


    bi14:
        printf("\n%d kgs of Pineapples have been added to your cart!", q14);
        b14 = q14*69;
        printf("\nYour bill is: %d", b14);
        goto end14;


    bi15:
        printf("\n%d kgs of Pomegranates have been added to your cart!", q15);
        b15 = q15*88;
        printf("\nYour bill is: %d", b15);
        goto end15;


    bi16:
        printf("\n%d kgs of Sweet limes have been added to your cart!", q16);
        b16 = q16*65;
        printf("\nYour bill is: %d", b16);
        goto end16;


    bi17:
        printf("\n%d pieces of Watermelons have been added to your cart!", q17);
        b17 = q17*127;
        printf("\nYour bill is: %d", b17);
        goto end17;

    bi18:
        printf("\n%d pieces of Grade 2 - Grapes have been added to your cart!", q35);
        b18 = q35*65;
        printf("\nYour bill is: %d", b18);
        goto end17;

    bi19:
        printf("\n%d pieces of Grade 2 - Ripe Mangoes have been added to your cart!", q36);
        b19 = q36*450;
        printf("\nYour bill is: %d", b19);
        goto end17;

    bi20:
        printf("\n%d pieces of Grade 2 - Unripe Mangoes have been added to your cart!", q37);
        b20 = q37*370;
        printf("\nYour bill is: %d", b20);
        goto end17;

    bi21:
        printf("\n%d pieces of Watermelons have been added to your cart!", q38);
        b21 = q38*114;
        printf("\nYour bill is: %d", b21);
        goto end17;

    vi1:
        printf("\n%d kgs of Bitter Gourd have been added to your cart!", q18);
        v1 = q18*50;
        printf("\nYour bill is: %d", v1);
        goto end18;

    vi2:
        printf("\n%d kgs of Bottle Gourd have been added to your cart!", q19);
        v2 = q19*80;
        printf("\nYour bill is: %d", v2);
        goto end19;

    vi3:
        printf("\n%d kgs of Brinjal have been added to your cart!", q20);
        v3 = q20*70;
        printf("\nYour bill is: %d", v3);
        goto end20;


    vi4:
        printf("\n%d pieces of Cabbage have been added to your cart!", q21);
        v4 = q21*60;
        printf("\nYour bill is: %d", v4);
        goto end21;


    vi5:
        printf("\n%d kgs of Capsicum apples have been added to your cart!", q22);
        v5 = q22*80;
        printf("\nYour bill is: %d", v5);
        goto end22;


    vi6:
        printf("\n%d kgs of Cauliflower have been added to your cart!", q23);
        v6 = q23*80;
        printf("\nYour bill is: %d", v6);
        goto end23;

    vi7:
        printf("\n%d kgs of Garlic have been added to your cart!", q24);
        v7 = q24*200;
        printf("\nYour bill is: %d", v7);
        goto end24;

    vi8:
        printf("\n%d kgs of Ginger have been added to your cart!", q25);
        v8 = q25*100;
        printf("\nYour bill is: %d", v8);
        goto end25;

    vi9:
        printf("\n%d dozen of Green Peas have been added to your cart!", q26);
        v9 = q26*70;
        printf("\nYour bill is: %d", v9);
        goto end26;

    vi10:
        printf("\n%d dozen of Lady finger have been added to your cart!", q27);
        v10 = q27*80;
        printf("\nYour bill is: %d", v10);
        goto end27;

   /* vi11:
        printf("\n%d kgs of Ivy Gourd have been added to your cart!", q28);
        v11 = q28*100;
        printf("\nYour bill is: %d", v11);
        goto end28 */

    vi12:
        printf("\n%d kgs of Spinach have been added to your cart!", q29);
        v12 = q29*20;
        printf("\nYour bill is: %d", v12);
        goto end29;

    vi13:
        printf("\n%d kgs of Potato have been added to your cart!", q30);
        v13 = q30*30;
        printf("\nYour bill is: %d", v13);
        goto end30;

    vi14:
        printf("\n%d kgs of Pumpkin have been added to your cart!", q31);
        v14 = q31*40;
        printf("\nYour bill is: %d", v14);
        goto end31;

    vi15:
        printf("\n%d kgs of Onion have been added to your cart!", q32);
        v15 = q32*40;
        printf("\nYour bill is: %d", v15);
        goto end32;

    vi16:
        printf("\n%d kgs of Sweet Potato have been added to your cart!", q33);
        v16 = q33*50;
        printf("\nYour bill is: %d", v16);
        goto end33;

    vi17:
        printf("\n%d pieces of Whole corn have been added to your cart!", q34);
        v17 = q34*42;
        printf("\nYour bill is: %d", v17);
        goto end34;

    vi18:
        printf("\n%d pieces of Grade 2- Cabbage have been added to your cart!", q39);
        v18 = q39*45;
        printf("\nYour bill is: %d", v18);
        goto end39;

    vi19:
        printf("\n%d pieces of Grade 2 - Garlic have been added to your cart!", q40);
        v19 = q40*180;
        printf("\nYour bill is: %d", v19);
        goto end40;

    vi20:
        printf("\n%d pieces of Grade 2 - Green Peas have been added to your cart!", q41);
        v20 = q41*55;
        printf("\nYour bill is: %d", v20);
        goto end41;

    vi21:
        printf("\n%d pieces of Grade 2 - Potato have been added to your cart!", q42);
        v21 = q42*20;
        printf("\nYour bill is: %d", v21);
        goto end42;

    vi22:
        printf("\n%d pieces of Grade 2 - Onion have been added to your cart!", q43);
        v22 = q43*30;
        printf("\nYour bill is: %d", v22);
        goto end43;


    total_cost:
            fbill = b1+b2+b3+b4+b5+b6+b7+b8+b9+b10+b11+b12+b13+b14+b15+b16+b17+b18+b19+b20+b21;
            vbill = v1+v2+v3+v4+v5+v6+v7+v8+v9+v10+v11+v12+v13+v14+v15+v16+v17+v18+v19+v20+v21+v22;
            final_bill = fbill + vbill;
            printf("\nYour bill is: %d\n\n", final_bill);

    char address[7][20];
    int i,pay_choice, pin_code, flat_no, yn, amount, card_no, exp, CVV;
    char UPI[10], bank[10], name[20];

    printf(" \n ***PAYMENT GATEWAY***\n");
    printf("Please Enter address\n");
    LOOP1:
 printf("Enter flat number and ");
      gets(address[0]);
     printf("enter building name \n");
      gets(address[1]);
    printf("Enter street name \n");
     gets(address[2]);
   printf("Enter locality name \n");
    gets(address[3]);
     printf("Enter city name \n");
      gets(address[4]);
     printf("Enter pin code \n");
      gets(address[5]);
     printf("Enter state name \n");
      gets(address[6]);
      for(i=0;i<8;i++)
      {
          printf("\n %s",address[i]);
      }
    printf("\nIs the given information correct? 1= Yes, 2= No\n");
    scanf("%d", &yn);
    if(yn == 2){
        goto LOOP1;
    }
    printf("Your bill is %d. \n How do you want to pay for your delivery?\n Press 1 for COD.\n Press 2 for UPI. \n Press 3 for netbanking. \n Press 4 for credit card.", final_bill);
    scanf("%d", &pay_choice);
    if(pay_choice == 1){
       printf("You have chosen COD\n");
       printf("Keep Rs.%d ready\n", final_bill);
       printf("Thank you for shopping with us. Your groceries will be delivered soon.");
    }
    if(pay_choice == 2){
       printf("You have chosen UPI.\nEnter your UPI of choice.");
       scanf("%s", &UPI);
       LOOP2:
       printf("Welcome to %s. Enter Amount.", UPI);
       scanf("%d", &amount);
       if(amount == final_bill){
       printf("Your money has been transferred successfully.\nThank you for shopping with us. Your groceries will be delivered soon.");
       }
       else{
           printf("Incorrect amount. Please try again.");
           goto LOOP2;
       }
    }
    if(pay_choice == 3){
       printf("You have chosen netbanking\nEnter your Bank of choice");
       scanf("%s", &bank);
       LOOP3:
       printf("Welcome to %s bank, %s %s. Enter Amount.", bank, l.fname, l.lname);
       scanf("%d", &amount);
       if(amount == final_bill){
       printf("Your money has been transferred successfully\n Thank you for shopping with us. Your groceries will be delivered soon.");
       }
       else{
            printf("Incorrect amount. Please try again.");
           goto LOOP3;
       }

    }
    if(pay_choice == 4)
    {
       printf("You have chosen Credit Card\nEnter your Credit card number as shown(xxxxxx).\n");
      scanf("%d", &card_no);
       printf("\nName on the credit card: ");

       scanf("%s", &name);

       printf("Enter your expiry date as shown(mmyy).\n");
       scanf("%d",&exp);
       LOOP4:
       printf("Welcome  %s %s. Enter CVV.\n", l.fname, l.lname);
       scanf("%d", &CVV);
       if(CVV == 732)
        {
           LOOP5:
           printf(" Enter Amount: ");
           scanf("%d", &amount);
            if(amount == final_bill){
             printf("Your money has been transferred successfully\nThank you for shopping with us. Your groceries will be delivered soon.");
            }
           else{
             goto LOOP5;
              printf("Incorrect amount. Please try again.");
            }
        }
       else{
           printf("Incorrect CVV. Please try again.");
           goto LOOP4;
       }

    }
    goto any_login;

farmer_login:

    printf(" *****Welcome to the Farmer's account *****");
    printf("\n select the action you want to perform ");
int b;
   vapis:
    printf(" \n 1: check fruit stock \t 2: check vegetable stock \t 3:logout ");
    scanf("%d", &s);
    switch (s)
{
    case 1:
    {

    printf("\nCode\t\t\tQuantity available: ");
    printf("\n1. Apples\t\t\t%d", qt1);
    printf("\n2. Apricots\t\t\t%d", qt2);
    printf("\n3. Avocados\t\t\t%d", qt3);
    printf("\n4. Bananas\t\t\t%d", qt4);
    printf("\n5. Custard Apple\t\t%d", qt5);
    printf("\n6. Grapes\t\t\t%d", qt6);
    printf("\n7. Guavas\t\t\t%d", qt7);
    printf("\n8. Lychee\t\t\t%d", qt8);
    printf("\n9. Ripe Mango\t\t\t%d", qt9);
    printf("\n10. Unripe Mango\t\t%d", qt10);
    printf("\n11. Orange\t\t\t%d", qt11);
    printf("\n12. Papaya\t\t\t%d", qt12);
    printf("\n13. Pear\t\t\t%d", qt13);
    printf("\n14. Pineapple\t\t\t%d", qt14);
    printf("\n15. Pomegranate\t\t\t%d", qt15);
    printf("\n16. Sweet lime\t\t\t%d", qt16);
    printf("\n17. Watermelon\t\t\t%d", qt17);
    printf("\n35. Grade 2- Grape\t\t%d", qt18);
    printf("\n36. Grade 2 - Ripe Mango\t%d", qt19);
    printf("\n37. Grade 2- Unripe Mango\t%d", qt20);
    printf("\n38. Grade2 - Watermelon\t\t%d", qt21);
    update_restock:
    printf("\n\n1. Update quantities\n2. Restock everything\n3. Back:\n4. Payment ");
    scanf("%d", &work);

    if (work == 1)
    {
        printf("\nEnter code of quantity: ");
        scanf("%d", &code);

        if (code == 1)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt1 = qt1 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt1);
            fp1=b*44;
            goto update_restock;

        }
        if (code == 2)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt2 = qt2 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt2);
            fp2=b*101;
            goto update_restock;

        }
        if (code == 3)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt3 = qt3 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt3);
             fp3=b*56;
            goto update_restock;

        }
        if (code == 4)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt4 = qt4 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt4);
             fp4=b*24;
            goto update_restock;

        }
        if (code == 5)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt5 = qt5 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt5);
            fp5=b*115;
            goto update_restock;


        }
        if (code == 6)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt6 = qt6 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt6);
             fp6=b*76;
            goto update_restock;


        }
        if (code == 7)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt7 = qt7 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt7);
              fp7=b*99;
            goto update_restock;


        }
        if (code == 8)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt8 = qt8 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt8);
              fp8=b*127;
            goto update_restock;


        }
        if (code == 9)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt9 = qt9 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt9);
               fp9=b*500;
            goto update_restock;


        }
        if (code == 10)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt10 = qt10 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt10);
               fp10=b*400;
            goto update_restock;


        }
        if (code == 11)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt11 = qt11 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt11);
              fp11=b*89;
            goto update_restock;


        }
        if (code == 12)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt12 = qt12 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt12);
             fp12=b*105;
            goto update_restock;


        }
        if (code == 13)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt13 = qt13 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt13);
               fp13=b*106;
            goto update_restock;


        }
        if (code == 14)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt14 = qt14 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt14);
              fp14=b*69;
            goto update_restock;


        }
        if (code == 15)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt15 = qt15 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt15);
              fp15=b*88;

            goto update_restock;

        }
        if (code == 16)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt16 = qt16 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt16);
               fp16=b*65;
            goto update_restock;


        }
        if (code == 17)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt17 = qt17 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt17);
                         fp17=b*127;
            goto update_restock;


        }
        if (code == 35)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt18 = qt18 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt18);
              fp35=b*65;
            goto update_restock;


        }
        if (code == 36)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt19 = qt19 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt19);
            fp36=b*450;
            goto update_restock;


        }
        if (code == 37)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt20 = qt20 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt20);
               fp37=b*370;
            goto update_restock;


        }
        if (code == 38)
        {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            qt21 = qt21 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", qt21);
               fp38=b*114;
            goto update_restock;


        }
    }
    if (work == 2)
    {
                printf("\nThe quantities less than 10 have been automatically restocked to 10 ");
        printf("\n Redirecting you to the payment window");

         if (qt1!=10)
            {
                fp1=(10-qt1)*44;

            }
            if (qt2!=10)
            {
                fp2=(10-qt2)* 101;


            }
            if (qt3!=10)
            {
                fp3=(10-qt3)*56;

            }
            if (qt4<10)
            {
                fp4=(10-qt4)*24;

            }
            if (qt5<10)
            {
                fp5=(10-qt5)*115;

            }
            if (qt6<10)
            {
                fp6=(10-qt6)*76;

            }
            if (qt7<10)
            {
                fp7=(10-qt7)*99;

            }
            if (qt8<10)
            {
                fp8=(10-qt8)*127;

            }
            if (qt9<10)
            {
                fp9=(10-qt9)*500;

            }
            if (qt10<10)
            {
                fp10=(10-qt10)*400;

            }
            if (qt11<10)
            {
                fp11=(10-qt11)*89;

            }
            if (qt12<10)
            {
                fp12=(10-qt12)*105;

            }
            if (qt13<10)
            {
                fp13=(10-qt13)*106;

            }
            if (qt14<10)
            {
                fp14=(10-qt14)*69;

            }
            if (qt15<10)
            {
                fp15=(10-qt15)*88;

            }
            if (qt16<10)
            {
                fp16=(10-qt16)*65;

            }
            if (qt17<10)
            {
                fp17=(10-qt17)*127;

            }
            if (qt18<10)
            {
                fp35=(10-qt18)*65;

            }
            if (qt19<10)
            {
                fp36=(10-qt19)*85;

            }
            if (qt20<10)
            {
                fp37=(10-qt20)*67;

            }
            if (qt21<10)
            {
                fp38=(10-qt21)*114;

            }
             ftot=fp1+fp2+fp3+fp4+fp5+fp6+fp7+fp8+fp9+fp10+fp11+fp12+fp13+fp14+fp15+fp16+fp17+fp35+fp36+fp37+fp38;
        payment(&ftot);


    qt2 =10, qt4 = 10, qt6 = 10, qt8 = 10, qt10 = 10, qt12 = 10, qt14 = 10, qt16 = 10, qt18 = 10, qt20=10;
   qt1=10, qt3 = 10, qt5 = 10, qt7 = 10, qt9 = 10, qt11 = 10, qt13 = 10, qt15 = 10, qt17 = 10, qt21=10, qt19=10;


    }
    if (work == 3)
        goto vapis;

     if (work == 4)
     {
         ftot=fp1+fp2+fp3+fp4+fp5+fp6+fp7+fp8+fp9+fp10+fp11+fp12+fp13+fp14+fp15+fp16+fp17+fp35+fp36+fp37+fp38;
        payment(&ftot);

     }


     goto vapis;
            break;
 }

    case 2:
    {

    printf("\nCode\t\t\tQuantity available: ");
    printf("\n18. Bitter gourd: \t\t%d ",vt1);
    printf("\n19. Bottle gourd: \t\t%d",vt2);
    printf("\n20. Brinjal: \t\t\t%d",vt3);
    printf("\n21. Cabbage: \t\t\t%d",vt4);
    printf("\n22. Capsicum: \t\t\t%d",vt5);
    printf("\n23. Cauliflower: \t\t%d",vt6);
    printf("\n24. Garlic: \t\t\t%d",vt7);
    printf("\n25. Ginger: \t\t\t%d",vt8);
    printf("\n26. Green Peas: \t\t\t%d",vt9);
    printf("\n27. Lady finger: \t\t%d",vt10);
    //printf("\n11. Ivy gourd: \t\t%d",vt11);
    printf("\n29. Spinach: \t\t\t%d",vt12);
    printf("\n30. Potato: \t\t\t%d",vt13);
    printf("\n31. Pumpkin: \t\t\t%d",vt14);
    printf("\n32. Onion: \t\t\t%d",vt15);
    printf("\n33. Sweet Potato: \t\t%d",vt16);
    printf("\n34. Whole corn: \t\t%d",vt17);
    printf("\n39. Grade 2 - Cabbage: \t\t%d",vt18);
    printf("\n40. Grade 2 - Garlic: \t\t%d",vt19);
    printf("\n41. Grade 2 - Green Peas: \t\t%d",vt20);
    printf("\n42. Grade 2 - Potato: \t\t%d",vt21);
    printf("\n43. Grade 2 - Onion: \t\t%d",vt22);

        update_restock2:
        printf("\n\n1.Update quantities\n2. Restock everything\n3. Back\n4. Payment ");
        scanf("%d", &work2);
        if (work2 == 1)
        {
            printf("\nEnter the code of the quantity you want to update:\n ");
            scanf("%d", &code2);
            if (code2 == 18)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt1 = vt1 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt1);
            fp18=b*50;

            goto update_restock2;

                }

            if (code2 == 19)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt2 = vt2 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt2);
            fp19=b*80;
            goto update_restock2;



                }

            if (code2 == 20)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt3 = vt3 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt3);
             fp20=b*70;
            goto update_restock2;


                }

            if (code2 == 21)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt4 = vt4 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt4);
                 fp21=b*60;
            goto update_restock2;


                }

            if (code2 == 22)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt5 = vt5 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt5);
            fp22=b*80;
            goto update_restock2;


                }

            if (code2 == 23)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt6 = vt6 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt6);
               fp23=b*80;
            goto update_restock2;


                }

            if (code2 == 24)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt7 = vt7 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt7);
            goto update_restock2;
            fp24=b*200;

                }

            if (code2 == 25)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt8 = vt8 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt8);
             fp25=b*100;

            goto update_restock2;

                }

            if (code2 == 26)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt9 = vt9 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt1);
              fp26=b*70;
            goto update_restock2;


                }

            if (code2 == 27)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt10 = vt10 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt10);
            fp27=b*80;
            goto update_restock2;


                }
           /* if (code2 == 28)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt11 = vt11 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt11);
            goto update_restock2;
            fp28=b*100;

                }*/

            if (code2 == 29)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt12 = vt12 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt12);
            fp29=b*20;
            goto update_restock2;


                }

            if (code2 == 30)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt13 = vt13 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt13);
            fp30=b*30;
            goto update_restock2;


                }

            if (code2 == 31)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt14 = vt14 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt14);
              fp31=b*40;
            goto update_restock2;


                }

            if (code2 == 32)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt15 = vt15 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt15);
                fp32=b*40;
            goto update_restock2;


                }

            if (code2 == 33)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt16 = vt16 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt16);
            fp33=b*50;
            goto update_restock2;


                }

            if (code2 == 39)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt17 = vt17 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt17);
             fp39=b*45;
            goto update_restock2;


                }

            if (code2 == 40)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt18 = vt18 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt18);
             fp40=b*180;
            goto update_restock2;


                }

            if (code2 == 41)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt19 = vt19 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt19);
             fp41=b*55;
            goto update_restock2;


                }

            if (code2 == 42)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt20 = vt20 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt20);
              fp42=b*20;
            goto update_restock2;


                }

            if (code2 == 43)
                {
            printf(" how many kilos of quantity you want to add?");
            scanf("%d", &b);
            vt21 = vt21 + b;
            printf(" \nyou have successfully added %d kilos to your quantity", b);
            printf("\nUpdated value: %d", vt21);
            fp43=b*30;
            goto update_restock2;


                }
        }

        if (work2 == 2)
        {
            printf("\nThe quantities less than 10 have been automatically restocked to 10 ");
        printf("\n Redirecting you to the payment window");

         if (vt1!=0)
            {
                fp18=(10-vt1)*50;

            }
             if (vt2<10)
            {
                fp19=(10-vt2)*80;

            }
             if (vt3<10)
            {
                fp20=(10-vt3)*70;

            }
             if (vt4<10)
            {
                fp21=(10-vt4)*60;

            }
             if (vt5<10)
            {
                fp22=(10-vt5)*80;

            }
             if (vt6<10)
            {
                fp23=(10-vt6)*80;

            }
             if (vt7<10)
            {
                fp24=(10-vt7)*200;

            }
             if (vt8<10)
            {
                fp25=(10-vt8)*100;

            }
             if (vt9<10)
            {
                fp26=(10-vt9)*70;

            }
             if (vt10<10)
            {
                fp27=(10-vt10)*80;

            }

             if (vt12<10)
            {
                fp29=(10-vt12)*20;

            }
             if (vt13<10)
            {
                fp30=(10-vt13)*30;

            }
             if (vt14<10)
            {
                fp31=(10-vt14)*40;

            }
             if (vt15<10)
            {
                fp32=(10-vt15)*40;

            }
             if (vt16<10)
            {
                fp33=(10-vt16)*50;

            }
             if (vt17<10)
            {
                fp34=(10-vt17)*42;

            }
             if (vt18<10)
            {
                fp39=(10-vt18)*45;

            }
             if (vt19<10)
            {
                fp40=(10-vt19)*180;

            }
             if (vt20<10)
            {
                fp41=(10-vt20)*55;

            }
             if (vt21<10)
            {
                fp42=(10-vt21)*20;

            }
             if (vt22<10)
            {
                fp43=(10-vt22)*30;

            }
          ftot=fp18+fp19+fp20+fp21+fp22+fp23+fp24+fp25+fp26+fp27+fp28+fp29+fp30+fp31+fp32+fp33+fp34+fp39+fp40+fp41+fp42+fp43;
            payment(&ftot);

            vt2 =10, vt4 = 10, vt6 = 10, vt8 = 10, vt10 = 10, vt12 = 10, vt14 = 10, vt16 = 10, vt18 = 10, vt19 = 10, vt20 = 10;
     vt1=10, vt3 = 10, vt5 = 10, vt7 = 10, vt9 = 10, vt11 = 10, vt13 = 10, vt15 = 10, vt17 = 10, vt21 =10, vt22 =10;

        }

        if (work2 == 3)
        {
            goto vapis;
        }
          if (work2 == 4)
     {
         ftot=fp18+fp19+fp20+fp21+fp22+fp23+fp24+fp25+fp26+fp27+fp28+fp29+fp30+fp31+fp32+fp33+fp34+fp39+fp40+fp41+fp42+fp43;
            payment(&ftot);

     }

     goto vapis;
        break;
    }
    case 3:
    {
         printf(" thank you for joining with us");
         goto any_login;
         break;
    }
}

int rem, quantity;
    remove:
    printf("\nEnter code of the quantity you want to remove: ");
    scanf("%d", &rem);

    if (rem == 1)
    {
        printf("\nEnter the quantity of Apples you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q1)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q1 = q1 - quantity;
            printf("\nApples currently in cart: %d", q1);

            b1 = b1 - (quantity*44);
            printf("\nModified cost of Apricots: %d", b1);
            goto cart;
        }
    }

       if (rem == 2)
    {
        printf("\nEnter the quantity of Apricots you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q2)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q2 = q2 - quantity;
            printf("\nApricots currently in cart: %d", q2);

            b2 = b2 - (quantity*101);
            printf("\nModified cost of Apricots: %d", b2);
            goto cart;
        }
    }

        if (rem == 3)
    {
        printf("\nEnter the quantity of Avocados you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q3)
        {
            printf("\n%d pieces aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q3 = q3 - quantity;
            printf("\nAvocados currently in cart: %d", q3);

            b3 = b3 - (quantity*56);
            printf("\nModified cost of Avocados: %d", b3);
            goto cart;
        }
    }

        if (rem == 4)
    {
        printf("\nEnter the quantity of Bananas you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q4)
        {
            printf("\n%d pieces aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q4 = q4 - quantity;
            printf("\nBananas currently in cart: %d", q4);

            b4 = b4 - (quantity*24);
            printf("\nModified cost of Bananas: %d", b4);
            goto cart;
        }
    }

        if (rem == 5)
    {
        printf("\nEnter the quantity of Custard Apples you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q5)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q5 = q5 - quantity;
            printf("\nCustard Apples currently in cart: %d", q5);

            b5 = b5 - (quantity*115);
            printf("\nModified cost of Custard Apple: %d", b5);
            goto cart;
        }
    }

        if (rem == 6)
    {
        printf("\nEnter the quantity of Grapes you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q6)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q6 = q6 - quantity;
            printf("\nGrapes currently in cart: %d", q6);

            b6 = b6 - (quantity*76);
            printf("\nModified cost of Grapes: %d", b6);
            goto cart;
        }
    }

        if (rem == 7)
    {
        printf("\nEnter the quantity of Guavas you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q7)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q7 = q7 - quantity;
            printf("\nGuava currently in cart: %d", q7);

            b7 = b7 - (quantity*99);
            printf("\nModified cost of Guavas: %d", b7);
            goto cart;
        }
    }

        if (rem == 8)
    {
        printf("\nEnter the quantity of Lychee you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q8)
        {
            printf("\n%d dozens aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q8 = q8 - quantity;
            printf("\nLychee currently in cart: %d", q8);

            b8 = b8 - (quantity*127);
            printf("\nModified cost of Lychee: %d", b8);
            goto cart;


        }
    }

        if (rem == 9)
    {
        printf("\nEnter the quantity of Ripe Mangos you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q9)
        {
            printf("\n%d dozens aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q9 = q9 - quantity;
            printf("\nRipe Mangos currently in cart: %d", q9);

            b9 = b9 - (quantity*97);
            printf("\nModified cost of Ripe Mango: %d", b9);
            goto cart;
        }
    }

        if (rem == 10)
    {
        printf("\nEnter the quantity of Unripe Mangos you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q10)
        {
            printf("\n%d dozens aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q10 = q10 - quantity;
            printf("\nUnripe mangos currently in cart: %d", q10);

            b10 = b10 - (quantity*70);
            printf("\nModified cost of Unripe mangos: %d", b10);
            goto cart;
        }
    }

        if (rem == 11)
    {
        printf("\nEnter the quantity of Oranges you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q11)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q11 = q11 - quantity;
            printf("\nOranges currently in cart: %d", q11);

            b11 = b11 - (quantity*89);
            printf("\nModified cost of Oranges: %d", b11);
            goto cart;
        }
    }

        if (rem == 12)
    {
        printf("\nEnter the quantity of Papaya you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q12)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q12 = q12 - quantity;
            printf("\nPapaya currently in cart: %d", q12);

            b12 = b12 - (quantity*105);
            printf("\nModified cost of Papaya: %d", b12);
            goto cart;
        }
    }

        if (rem == 13)
    {
        printf("\nEnter the quantity of Pears you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q13)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q13 = q13 - quantity;
            printf("\nPears currently in cart: %d", q13);

            b13 = b13 - (quantity*106);
            printf("\nModified cost of Pears: %d", b13);
            goto cart;
        }
    }

        if (rem == 14)
    {
        printf("\nEnter the quantity of Pineapples you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q14)
        {
            printf("\n%d pieces aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q14 = q14 - quantity;
            printf("\nPineapples currently in cart: %d", q14);

            b14 = b14 - (quantity*69);
            printf("\nModified cost of Pineapples: %d", b14);
            goto cart;
        }
    }

    if (rem == 15)
    {
        printf("\nEnter the quantity of Pomegranates you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q15)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q15 = q15 - quantity;
            printf("\nPomegranates currently in cart: %d", q15);

            b15 = b15 - (quantity*88);
            printf("\nModified cost of Pomegranates: %d", b15);
            goto cart;
        }
    }

    if (rem == 16)
    {
        printf("\nEnter the quantity of Sweet lime you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q16)
        {
            printf("\n%d dozen aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q16 = q16 - quantity;
            printf("\nSweet lime currently in cart: %d", q16);

            b16 = b16 - (quantity*65);
            printf("\nModified cost of Sweet lime: %d", b16);
            goto cart;
        }
    }

    if (rem == 17)
    {
        printf("\nEnter the quantity of Watermelons you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q17)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q17 = q17 - quantity;
            printf("\nWatermelons currently in cart: %d", q17);

            b17 = b17 - (quantity*127);
            printf("\nModified cost of Watermelons: %d", b17);
            goto cart;
        }
    }

    if (rem == 18)
    {
        printf("\nEnter the quantity of Bitter Gourd you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q18)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q18 = q18 - quantity;
            printf("\nBitter Gourd currently in cart: %d", q18);

            v1 = v1 - (quantity*50);
            printf("\nModified cost of Bitter Gourd: %d", v1);
            goto cart;
        }
    }

    if (rem == 19)
    {
        printf("\nEnter the quantity of Bottle Gourd you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q19)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q19 = q19 - quantity;
            printf("\nBottle Gourd currently in cart: %d", q19);

            v2 = v2 - (quantity*80);
            printf("\nModified cost of Bottle Gourd: %d", v2);
            goto cart;
        }
    }

    if (rem == 20)
    {
        printf("\nEnter the quantity of Brinjal you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q20)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q20 = q20 - quantity;
            printf("\nBrinjal currently in cart: %d", q20);

            v3 = v3 - (quantity*70);
            printf("\nModified cost of Brinjal: %d", v3);
            goto cart;
        }
    }

    if (rem == 21)
    {
        printf("\nEnter the quantity of Cabbage you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q21)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q21 = q21 - quantity;
            printf("\nCabbage currently in cart: %d", q21);

            v4 = v4 - (quantity*60);
            printf("\nModified cost of Cabbage: %d", v4);
            goto cart;
        }
    }


    if (rem == 22)
    {
        printf("\nEnter the quantity of Capsicum you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q22)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q22 = q22 - quantity;
            printf("\nCapsicum currently in cart: %d", q22);

            v5 = v5 - (quantity*80);
            printf("\nModified cost of Capsicum: %d", v5);
            goto cart;
        }
    }

     if (rem == 23)
    {
        printf("\nEnter the quantity of Cauliflower you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q24)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q24 = q24 - quantity;
            printf("\nCauliflower currently in cart: %d", q24);

            v6 = v6 - (quantity*80);
            printf("\nModified cost of Cauliflower: %d", v6);
            goto cart;
        }
    }

    if (rem == 24)
    {
        printf("\nEnter the quantity of Garlic you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q23)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q23 = q23 - quantity;
            printf("\nGarlic currently in cart: %d", q23);

            v7 = v7 - (quantity*200);
            printf("\nModified cost of Garlic: %d", v7);
            goto cart;
        }
    }


    if (rem == 25)
    {
        printf("\nEnter the quantity of Ginger you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q25)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q25 = q25 - quantity;
            printf("\nGinger currently in cart: %d", q25);

            v8 = v8 - (quantity*100);
            printf("\nModified cost of Ginger: %d", v8);
            goto cart;
        }
    }

    if (rem == 26)
    {
        printf("\nEnter the quantity of Green Peas you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q26)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q26 = q26 - quantity;
            printf("\nGreen Peas currently in cart: %d", q26);

            v9 = v9 - (quantity*70);
            printf("\nModified cost of Green Peas: %d", v9);
            goto cart;
        }
    }

    if (rem == 27)
    {
        printf("\nEnter the quantity of Lady finger you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q27)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q27 = q27 - quantity;
            printf("\nLady finger currently in cart: %d", q27);

            v10 = v10 - (quantity*80);
            printf("\nModified cost of Lady finger: %d", v10);
            goto cart;
        }
    }

    if (rem == 28)
    {
        printf("\nEnter the quantity of Ivy Gourd you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q28)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q28 = q28 - quantity;
            printf("\nIvy Gourd currently in cart: %d", q14);

            v11 = v11 - (quantity*100);
            printf("\nModified cost of Ivy Gourd: %d", v11);
            goto cart;
        }
    }

    if (rem == 29)
    {
        printf("\nEnter the quantity of Spinach you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q29)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q29 = q29 - quantity;
            printf("\nSpinach currently in cart: %d", q29);

            v12 = v12 - (quantity*20);
            printf("\nModified cost of Spinach: %d", v12);
            goto cart;
        }
    }

    if (rem == 30)
    {
        printf("\nEnter the quantity of Potato you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q30)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q30 = q30 - quantity;
            printf("\nPotato currently in cart: %d", q30);

            v13 = v13 - (quantity*30);
            printf("\nModified cost of Potato: %d", v13);
            goto cart;
        }
    }

    if (rem == 31)
    {
        printf("\nEnter the quantity of Pumpkin you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q31)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q31 = q31 - quantity;
            printf("\nPumpkin currently in cart: %d", q31);

            v14 = v14 - (quantity*40);
            printf("\nModified cost of Pumpkin: %d", v14);
            goto cart;
        }
    }

    if (rem == 32)
    {
        printf("\nEnter the quantity of Onion you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q32)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q32 = q32 - quantity;
            printf("\nOnion currently in cart: %d", q32);

            v15 = v15 - (quantity*40);
            printf("\nModified cost of Onions: %d", v15);
            goto cart;
        }
    }

    if (rem == 33)
    {
        printf("\nEnter the quantity of Sweet Potato you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q33)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q33 = q33 - quantity;
            printf("\nSweet Potato currently in cart: %d", q33);

            v16 = v16 - (quantity*50);
            printf("\nModified cost of Sweet Potato: %d", v16);
            goto cart;
        }
    }

    if (rem == 34)
    {
        printf("\nEnter the quantity of Whole corn you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q34)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q34 = q34 - quantity;
            printf("\nWhole corn currently in cart: %d", q34);

            v17 = v17 - (quantity*42);
            printf("\nModified cost of Whole corn: %d", v17);
            goto cart;
        }
    }


    if (rem == 35)
    {
        printf("\nEnter the quantity of Grapes (Grade 2) you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q35)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q35 = q35 - quantity;
            printf("\nCurrently in cart: %d", q35);

            qt18 = qt18 - (quantity*65);
            printf("\nModified cost: %d", b18);
            goto cart;
        }
    }


    if (rem == 36)
    {
        printf("\nEnter the quantity of Ripe Mangoes(Grade 2) you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q36)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q36 = q36 - quantity;
            printf("\nCurrently in cart: %d", q36);

            qt19 = qt19 - (quantity*450);
            printf("\nModified cost: %d", b19);
            goto cart;
        }
    }


    if (rem == 37)
    {
        printf("\nEnter the quantity of Unripe Mangoes(Grade 2) you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q37)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q37 = q37 - quantity;
            printf("\nCurrently in cart: %d", q37);

            qt20 = qt20 - (quantity*370);
            printf("\nModified cost: %d", b20);
            goto cart;
        }
    }


    if (rem == 38)
    {
        printf("\nEnter the quantity of Watermelon(Grade 2) you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q38)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q38 = q38 - quantity;
            printf("\nCurrently in cart: %d", q38);

            qt21 = qt21 - (quantity*114);
            printf("\nModified cost: %d", b21);
            goto cart;
        }
    }


    if (rem == 39)
    {
        printf("\nEnter the quantity of Cabbage(Grade 2) you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q39)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q39 = q39 - quantity;
            printf("\nCurrently in cart: %d", q34);

            v18 = v18 - (quantity*45);
            printf("\nModified cost: %d", v18);
            goto cart;
        }
    }


    if (rem == 40)
    {
        printf("\nEnter the quantity of Garlic(Grade 2) you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q40)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q40 = q40 - quantity;
            printf("\nCurrently in cart: %d", q40);

            v19 = v19 - (quantity*180);
            printf("\nModified cost: %d", v19);
            goto cart;
        }
    }


    if (rem == 41)
    {
        printf("\nEnter the quantity of Green Peas(Grade 2) you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q41)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q41 = q41 - quantity;
            printf("\nCurrently in cart: %d", q41);

            v20 = v20 - (quantity*55);
            printf("\nModified cost: %d", v20);
            goto cart;
        }
    }


    if (rem == 42)
    {
        printf("\nEnter the quantity of Potato(Grade 2) you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q42)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q42 = q42 - quantity;
            printf("\nCurrently in cart: %d", q42);

            v21 = v21 - (quantity*20);
            printf("\nModified cost: %d", v21);
            goto cart;
        }
    }


    if (rem == 43)
    {
        printf("\nEnter the quantity of Onion(Grade 2) you want to remove: ");
        scanf("%d", &quantity);
        if (quantity > q43)
        {
            printf("\n%d kgs aren't present in your cart", quantity);
            goto cart;
        }
        else
        {
            q43 = q43 - quantity;
            printf("\nCurrently in cart: %d", q43);

            v22 = v22 - (quantity*30);
            printf("\nModified cost: %d", v22);
            goto cart;
        }
    }


}

int payment(int*ftot)
{
    int phonef,accf,ifsc;
    char namef[20];

    printf("\n Amount payable to you = %d",*ftot);

    printf("\n Mention your bank detials for the transaction");
    /*printf(" \n Enter your name:");
    gets(namef);*/
     printf(" \n Enter your phone number:");
     scanf("%d",&phonef);
     pay:
     printf("\n Enter your account number:");
     scanf("%d",&accf);
     if(accf==123456789)
     {
         ifsc_again:
         printf(" \nEnter your bank IFSC CODE:");
         scanf("\n%d",&ifsc);
       // gets(ifsc);
         if(ifsc==22200)
         {
             printf("Rs %d are successfully transfered into your account",*ftot);

         }
         else
         {
             printf(" Wrong IFSC code according to our records,please re enter");
             goto ifsc_again;
         }
     }
     else
     {
         printf(" \nInvalid account number as per our records, pleasse re enter");
         goto pay;
     }
     printf("\nThank you, see you soon!");
     printf("\n Redireting you towards the home page.....\n\n");

     return 0;
}
