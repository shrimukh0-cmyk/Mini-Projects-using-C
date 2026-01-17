#include<stdio.h>

int main(){
    printf("------------------------------------\n");
    printf("Hello please select your problem \n");
    printf("------------------------------------\n");
    int pro;
    printf("Press 01 for refund issue  \n");
    printf("Press 02 for General query  \n");
    printf("Press 03 for Issue related to last order \n");
    scanf("%d",&pro);
    switch (pro)
    {
    case 1 : printf("Enter the refund related issues,\n");
             printf("----------------------------------------\n");
             printf("Enter the product in which you have issue.\n");
             int issue;
             printf("-------------------------------\n");
             printf("Enter order number(1-5): \n");
             scanf("%d",&issue);
             switch (issue)
               {
                   case 1: printf("Order number 5\n");
                         break;
                   case 2: printf("Order number 4\n");
                         break;
                   case 3: printf("Order number 3\n");
                         break;
                  case 4: printf("Order number 2\n");
                         break;
                  case 5: printf("Order number 1\n");
                         break;
                  default: printf("Not in order list \n");
                         break;
                }
          break;

    case 2: printf(" Please select your general query\n");
            printf("---------------------------------------\n");
            printf("Enter 01 for product quality issue. \n ");
            printf("---------------------------------------\n");
            printf("Enter 02 for Size issue. \n");
            printf("---------------------------------------\n");
            printf("Enter 03 for any product defect. \n");
            printf("---------------------------------------\n");
            printf("Enter 04 for the other issues.. \n ");
            printf("---------------------------------------\n");
            int problem;
            printf("Enter problem number : \n");
            scanf("%d",&problem);
            switch (problem)
            {
            case 1 : printf("Product quality issue.\n");
                   printf("---------------------------------------\n");
                   printf("Enter 01 for missing part . \n ");
                   printf("---------------------------------------\n");
                   printf("Enter 02 for quality issue. \n");
                   printf("---------------------------------------\n");
                   printf("Enter 03 for scarch and damanged piece . \n");
                   printf("---------------------------------------\n");
                   printf("Enter 04 for colour not same  as shown . \n ");
                   printf("---------------------------------------\n");

                break;
            case 2 : printf("Product size issue. \n");
                    int x;
                    printf("--------------------------------------\n");
                    printf("Enter 1 if product is tight fitting & oversized.\n");
                    printf("--------------------------------------\n");
                    printf("--------------------------------------\n");
                    printf("Enter 0 if product is loose fitting & under sized.\n");
                    printf("--------------------------------------\n");
                    scanf("%d",&x);
                    if(x==1){
                        printf("Over sized: \n");
                    }
                    else if(x==0){
                        printf("Loose fitting : \n");
                    }
                    else{
                        printf("Not in the option : \n");
                    }
                break;
            case 3 : printf("Product defect.\n");
                break;
            case 4 : printf("Any other issues. \n");
                     printf("-----------------------------------------------------------------\n");
                     printf("Please contact our customer care team by raising query or Email: \n");
                     printf("------------------------------------------------------------------\n");          
                  break;
            default:printf("-------------------------------------------------------------\n");
                    printf("Query not listed in the list kindly go back to main menu.\n");
                    printf("-------------------------------------------------------------\n");
                break;
            }
        break;
    case 3:
        printf("---------------------------------\n");
        printf("please select order number\n");
        int order;
         printf("---------------------------------\n");
         printf("Select you order number : \n");
         scanf("%d",&order);
        switch (order)
        {
        case 1: printf("Order number 5\n");
            break;
        case 2: printf("Order number 4\n");
            break;
        case 3: printf("Order number 3\n");
            break;
        case 4: printf("Order number 2\n");
            break;
         case 5: printf("Order number 1\n");
            break;
        default: printf("Not in order list \n");
            break;
        }
        break;
    default: printf("-------------------------------------------------------------------------------\n");
             printf(" !! Your selected issue is not listed kindly contact customer care support !!\n");
             printf("------------------------------------------------------------------------------\n");
        break;
    }
    return 0;
}