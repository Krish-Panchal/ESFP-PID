#include<stdio.h>
#include<string.h>
char login();
char Menu();
char selectnft();
char BUY();
char CryptoCurrency();
char walletcode();
char USD();
char INR();
char confirm();
char success();
char SELL();
char UPI();
char login()
{
    char userid[20],password[20];
    int x,y;
    printf("Enter your userid:");
    scanf("%s",userid);
    printf("\nEnter your password:");
    scanf("%s",password);
    x=strcmp(userid,"NFT");
    if(x==0)
    {
        y=strcmp(password,"123");
        if(y==0)
        {
            printf("\nLogin Successfull\n");
            Menu();
        }
        else
        {
            printf("Invalid Password");
        }
    }
    else
    {
        printf("Invalid Username");
    }
}
char Menu()
{
    int choice;
    printf("\n\n\nNFTs:\n");
    printf("\nPress 1 To Buy NFTs \n");
    printf("\nPress 2 for Sell NFTs\n");
    printf("\nPress 0 to Exit\n");
    printf("\nEnter Your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        selectnft();
        break;
        case 2:
        SELL();
        break;
        case 0:
        break;
        default:
        printf("Invalid choice");
        break;
    }
}
char selectnft()
{
	int select;
	printf("\n\n\nSelect NFT:-\n");
	printf("\nPress 1 to Buy NFT 1\t");
    printf("Press 2 to Buy NFT 2\t");
    printf("Press 3 to Buy NFT 3\t");
    printf("Press 4 to Buy NFT 4\t");
    printf("Press 5 to Buy NFT 5\n");
    printf("\nPress 0 to Exit\n");
    printf("\nEnter Your Choice:");
    scanf("%d",&select);
    switch(select)
    {
    	case 1:
    	BUY();
    	 break;
    	case 2:
    	BUY();
    	 break;
    	case 3:
    	BUY();
    	 break;
    	case 4:
    	BUY();
    	 break;
    	case 5:
    	BUY();
    	 break;
    	case 0:
        break;
        default:
        printf("Invalid choice");
        break;
	}
}
char BUY()
{
    int choice1;
    printf("\n\n\nBuy:-\n");
    printf("\nPress 1 to Buy Via CryptoCurrency\t");
    printf("Press 2 to Buy Via USD\t\t");
	printf("Press 3 to Buy Via INR\t");
    printf("Press 4 to go to Menu\n");
    printf("\nPress 0 to Exit\n");
    printf("\nEnter Your Choice:");
    scanf("%d",&choice1);
    switch(choice1)
    {
        case 1:
        CryptoCurrency();
        break;
        case 2:
        USD();
        break;
        case 3:
        INR();
        break;
        case 4:
        Menu();
        break;
        case 0:
        break;
        default:
        printf("Invalid choice");
        break;
    }
}
char CryptoCurrency()
{
    int select1;
    printf("\n\n\nCryptocurrency:-\n");
    printf("\nPress 1 To Buy using Bitcoin\t");
    printf("Press 2 To Buy using Solana\t");
    printf("Press 3 To Buy using Ethereum\n");
    printf("\nPress 0 to Exit\n");
    printf("\nEnter Your choice:");
    scanf("%d",&select1);
    switch(select1)
    {
        case 1:
        confirm();
        break;
        case 2:
        confirm();
        break;
        case 3:
        confirm();
        break;
        case 0:
        break;
        default:
        printf("Invalid choice");
        break;
    } 
}
char confirm()
{
	int select2;
    printf("\n\n\nConfirm Your Purchase:-\n");
    printf("\nPress 1 To Confirm Your Order\n");
    printf("\nPress 2 to Cancel your Order\n");
    printf("\nPress 0 to Exit\n");
    printf("\nEnter Your choice:");
    scanf("%d",&select2);
    switch(select2)
    {
        case 1:
        walletcode();
        break;
        case 2:
        Menu();
        break;
        case 0:
        break;
        default:
        printf("Invalid choice");
        break;
    } 
}

char walletcode()
{
	char code[20];
	int z,back;
	printf("\n\n\nEnter your Wallet code:-");
	scanf("%s",code);
	z=strcmp(code,"12345678");
    if(z==0)
    {
    	printf("\nYour Purchase was successful\n");
    	success();
	}
	else
	{
		printf("\nInvalid Wallet Code");
		Menu();
	}
}
char USD()
{
    char number[30];
	int a;
	printf("\n\n\nEnter your Credit card number:-");
	scanf("%s",number);
	a=strcmp(number,"1111-2222-3333-4444");
    if(a==0)
    {
    	printf("\nYour Purchase was successful\n");
    	success();
	}
	else
	{
		printf("\nInvalid Number");
		Menu();
	}   
}
char INR()
{
	char UPI[30];
	int b;
	printf("\n\n\nEnter your UPI:-");
	scanf("%s",UPI);
	b=strcmp(UPI,"krishashishpanchal1919@okhdfcbank");
    if(b==0)
    {
    	printf("\nYour Purchase was successfull\n");
    	success();
	}
	else
	{
		printf("\nInvalid UPI");
		Menu();
	}   
}
char success()
{
		int back;
		printf("\n\n\nYour Special NFT code is: *************A27\n");
    	printf("\nPress 1 to go back to menu\n");
    	printf("\nPress 0 to exit\n");
    	
    	printf("\nEnter Your choice:");
    	scanf("%d",&back);
    	switch(back)
    	{
    		case 1:
    		Menu();
    		break;
    		case 0:
    		break;
    		default:
        	printf("Invalid choice");
        	break;
		}
}
char SELL()
{
    int choice2;
	printf("\n\n\nSelect NFT:-\n");
	printf("\nPress 1 to Sell NFT 1\t");
    printf("Press 2 to Sell NFT 2\t");
    printf("Press 3 to Sell NFT 3\t");
    printf("Press 4 to Sell NFT 4\t");
    printf("Press 5 to Sell NFT 5\n");
    printf("\nPress 0 to Exit\n");
    printf("\nEnter Your Choice:");
    scanf("%d",&choice2);
    switch(choice2)
    {
    	case 1:
    	UPI();
    	 break;
    	case 2:
    	UPI();
    	 break;
    	case 3:
    	UPI();
    	 break;
    	case 4:
    	UPI();
    	 break;
    	case 5:
    	UPI();
    	 break;
    	case 0:
        break;
        default:
        printf("Invalid choice");
        break;
	}
}
char UPI()
{
	char UPI1[30];
	int c,back1;
	printf("\n\n\nEnter your UPI:-");
	scanf("%s",UPI1);
	c=strcmp(UPI1,"krishashishpanchal1919@okhdfcbank");
    if(c==0)
    {
    	printf("\nSold Successfully\n");
    	printf("\nYour Money Will be Credited Soon\n");
    	printf("\nPress 1 to go back to menu\n");
    	printf("\nPress 0 to exit\n");
    	printf("\nEnter Your choice:");
    	scanf("%d",&back1);
    	switch(back1)
    	{
    		case 1:
    		Menu();
    		break;
    		case 0:
    		break;
    		default:
        	printf("Invalid choice");
        	break;
		}
	}
	else
	{
		printf("\nInvalid UPI");
		Menu();
	}   
}

int main()
{
	{
	printf("  ________________________________________________________________________________________\n");
	printf(" |____                        Cultural NFts of Indian Heritage                        ____|\n");
	printf("      |                          Developed By:Panchal Krish                          |     \n ");
	printf("     |                    Essentials of Software and Programming-1                  |      \n");
	printf("  ____|                                YEAR:2022-2023                                |____ \n");
	printf(" |________________________________________________________________________________________|\n");
    login();
    return 0;
	}    
}

