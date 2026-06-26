#include<stdio.h>

struct Inventory
{
    int ID;
    int MRP;
    int stock;
    int offer;
    char name[20];
    int obj1;
    
};

int main()
{
    int choice;
    int i,j;

    struct Inventory item[10] =
    {
        {1,990,40,90,"Apple"},{2,1990,60,130,"Mango"},
        {3,2990,90,40,"Banana"},
        {4,3990,40,550,"Grapes"},{5,4990,50,500,"Eggs"},{6,5990,70,330,"Watermelon"},{7,6990,80,440,"Guava"},
        {8,7990,360,650,"Veggies"},{9,8990,330,560,"Pizza"},
        {10,9990,100,650,"Blades"}
    };

    int purchase;
    int k=0;
    int total=0;
    int quantity=0;
    int found;
    int obj1;
    

    printf("Address of obj1: %p\n", &obj1);
    do
    {
        
        printf("\n---------Trend Invoice---------\n");
        printf("1. View Inventory Stock\n");
        printf("2. Purchase Items\n");
        printf("3. Checkout & Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);
        

        switch(choice)
        {
            case 1:

                printf("\nID\tOffer\tMRP\tStock\tname\n");

                for(i=0;i<10;i++)
                {
                    printf("%d\t%d\t%d\t%d\t%s\n",
                           item[i].ID,
                           item[i].offer,
                           item[i].MRP,
                           item[i].stock,
                           item[i].name);
                }

                break;

            case 2:

                printf("Purchase Item With ID: ");
                scanf("%d",&purchase);

                found=0;

                for(j=0;j<10;j++)
                {
                    if(purchase==item[j].ID)
                    {
                        found=1;

                        printf("Item Available\n");

                        printf("Enter quantity to purchase: ");
                        scanf("%d",&quantity);

                        if(quantity<=item[j].stock)
                        {
                            item[j].stock =
                            item[j].stock - quantity;

                            total =
                            item[j].MRP * quantity;

                            k=item[j].ID;

                            printf("Item Added To Cart Successfully\n");
                        }
                        else
                        {
                            printf("Insufficient Stock\n");
                        }

                        break;
                    }
                }

                if(found==0)
                {
                    printf("Item Not Found\n");
                }

                break;

            case 3:

                printf("\n------ Invoice ------\n");

                printf("Purchased Item ID : %d\n",k);
                printf("Purchased Quantity : %d\n",quantity);
                printf("Total MRP : %d\n",total);

                printf("Thank You For Purchase!\n");

                break;

            default:

                printf("Invalid Choice\n");
        }

    }while(choice!=3);

    
    return 0;
}