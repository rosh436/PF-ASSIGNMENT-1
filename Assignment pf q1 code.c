#include<stdio.h>
#include<string.h>
int main(){
	int prevmoneySpent, withdrawalMoney, transactioninHour, total;
	char country1[20], country2[20], presentCountry[20];
	printf("Enter the money spent: ");
	scanf("%d", &prevmoneySpent);
	printf("Enter the transaction amount: ");
	scanf("%d",&withdrawalMoney);
	total=prevmoneySpent+withdrawalMoney;
	if(total>5000)
	printf("ALERT, The daily spending limit exceeded!\n");
	else
	printf("The amount is within the daily spending limit.\n");
	printf("Enter the number of transactions in one hour: ");
	scanf("%d", &transactioninHour);;
	if(transactioninHour>3){
	printf("Too many transactions in one hour\n");
	printf("ALERT!\n");
    }
	else{
	printf("The hourly transaction count is normal.\n");
    }   
	printf("Enter the usual two countries for transaction: ");
	scanf("%s %s", country1, country2);
	printf("Enter the present country for transaction: ");
	scanf("%s", presentCountry);
	if((strcmp(country1, presentCountry)==0)||(strcmp(country2, presentCountry)==0))
	printf("The Transaction has been processed\n");
	else
	printf("The Transaction location is unusual, ALERT.");
}
