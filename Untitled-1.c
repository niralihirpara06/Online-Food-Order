#include <stdio.h>
#include <math.h>
#include <string.h>
void reciept(int order_code[], int order_quantity[], int order_temp){
    char menu[5][16] = {"paneer tikka", "paneer masala", "paneer lababdar", "roti", "naan"};
    int paisa[5] = {180, 200, 190, 20, 30};
    float total=0.0,sum=0.0;
    int ans;
    printf("\n\n");
    for(int i=0; i<(order_temp) ; i++){
        printf("%s\t%d\n", menu[order_code[i]], (paisa[order_code[i]]*order_quantity[i]));
        sum=(sum+(paisa[order_code[i]]*order_quantity[i]));
    }
    total = sum + sum*0.05;
    printf("The total bill including gst is %f",total);
    //number();
    return;
}
void address()
{
      char b[10];
    printf("\nEnter your residence address  :");
    gets(b);
    gets(b);
    printf("%s",b);
    payment();
    return ;
}
 void payment()
{
    int pay;
    printf("\nSelect your payment method\n");
    printf("METHOD                      CODE\n"
           "CREDIT/DEBIT CARD            (0)\n"
           "CASH ON DELIVERY (COD)       (1)\n"
           "DIGITAL WALLET               (2)\n");
    printf("Enter choice code: ");
    scanf("%d",&pay);
    repay:
     switch(pay)
    {
        case 0:
        {
            long int card;
            int cvv;
            int OTP;
            Logic:
            printf("\nEnter your card Number: ");
            scanf("%ld",&card);
            if(card/1000000000000000.0<=10.0&&card/1000000000000000.0>=1.0){
                //printf("\nYour card number is %ld",card);
            }
           else
         {
        printf("Error!!!!\n");
        goto Logic;
         }
        Logic2:
        printf("\nEnter your cvv: ");
            scanf("%d",&cvv);
            if(cvv<=999&&cvv>=001){
            //printf("\nYour cvv is %d",cvv);
            }
           else
        {
        printf("Error!!!!\n");
        goto Logic2;
        }
        Logic3:
         printf("\nEnter OTP: ");
            scanf("%d",&OTP);
            if(OTP<=9999&&OTP>=0001){
                //printf("\nYour OTP is %d",OTP);
            }
           else
        {
        printf("Error!!!!\n");
        goto Logic3;
        }
         printf("\nOrder placed!!"); 
        }
        break;
        case 1:{
        printf("Your order for  is being placed");
        }
        break;
        case 2:
      {  
          long int num;
          Logi:
        printf("\nEnter your phone number linked to the digital wallet:");
         scanf("%ld",&num);
        if(num/1000000000.0<=10.0&&num/1000000000.0>=7.0) {
            printf("\nYour number is %ld",num);
            int pass;
            Log:
         printf("\nEnter PASSWORD: ");
            scanf("%d",&pass);
            if(pass<=99999&&pass>=0001){
                //printf("\nYour PASSWORD is %d",pass);
                 printf("\nYour order for  is being placed");
            }
           else
        {
        printf("Error!!!!\n");
        goto Log;
        }
        }
        else
        {
        printf("Error!!!!\n");
        goto Logi;
        }
        break;
        default: {
            printf("Invalid");
            goto repay;
    }
    return;
}
}
}
void number(){
    long int num;
    Logic1:
    printf("\nEnter your phone number:");
    scanf("%ld",&num);
    if(num/1000000000.0<=10.0&&num/1000000000.0>=7.0) printf("\nYour number is %ld",num);
    else
    {
        printf("Error!!!!\n");
        goto Logic1;
    }
    address();
    return;
}
void billing(int order_code[], int order_quantity[], int order_temp){
    char menu[5][16] = {"paneer tikka", "paneer masala", "paneer lababdar", "roti", "naan"};
    int paisa[5] = {180, 200, 190, 20, 30};
    float total=0.0,sum=0.0;
    int ans;
    printf("\n\n");
    for(int i=0; i<(order_temp) ; i++){
        printf("%s\t%d\n", menu[order_code[i]], (paisa[order_code[i]]*order_quantity[i]));
        sum=(sum+(paisa[order_code[i]]*order_quantity[i]));
    }
    total = sum + sum*0.05;
    //printf("The total bill including gst is %f",total);
    number();
    return;
}
void order(){
    int order_temp;
    printf("How much items are you going to buy:");
    scanf("%d", &order_temp);
    int order_code[order_temp];
    int order_quantity[order_temp];
    for(int i=0; i<order_temp; i++){
        printf("Enter the item code:");
        scanf("%d", &order_code[i]);
        printf("Enter the quantity:");
        scanf("%d", &order_quantity[i]);
    }
    billing(order_code, order_quantity, order_temp);
    reciept(order_code, order_quantity, order_temp);
    return;
}
int main()
{
    printf("ITEM             CODE        PAISA\n"
           "paneer tikka     (0)        180rs\n"
           "paneer masala    (1)        200rs\n"
           "paneer lababdar  (2)        190rs\n"
           "roti             (3)        20rs\n"
           "naan             (4)        30rs\n");
           order();
    return 0;
}