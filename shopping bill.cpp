#include<iostream>
using namespace std;
int main()
{
	string item_1 ;
	float price_item_1;
	string item_2;
	int price_item_2;
	string Total_bill;
	
	cout<<"Item_1: \n";
	cin>> item_1;
	
	cout<<"price_item_1: \n";
	cin>> price_item_1;
	
	cout<<"item_2: \n";
	cin>>item_2;
	
	cout<<"price_item_2: \n";
	cin>>price_item_2;
	
	
	cout<<"Total bill:"<< price_item_1 + price_item_2<< endl;
	cin>>Total_bill;
	
	return 0;
}
