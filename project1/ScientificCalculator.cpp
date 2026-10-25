#include<iostream>
#include<cmath>
using namespace std;
void showMenu(){
	cout<<"===Scientific Calculator====\n";
	cout<<"1.Addition:\n";
	cout<<"2.Subtraction:\n";
	cout<<"3.Multiplication:\n";
	cout<<"4.Division:\n";
	cout<<"5.power(x^y):\n";
	cout<<"6.Square root(sqrt(x)):\n";
	cout<<"7.sine(sin(x)in degrees:\n";
	cout<<"8.cosine(cos(x))in degrees:\n";
	cout<<"9.Tangent(tan(x)) in degrees:\n";
	cout<<"10.Natural Logritm (log(x)):\n";
	cout<<"11.Logrithm Base(log10(x)):\n";
	cout<<"0. Exit\n";
	cout<<"Enter your numbers:\n";
}
int main(){
	int choice;
	double numb1,numb2,result;
	const double PI=3.14;
	{
		showMenu();
		cin>>choice;
		switch(choice){
			case 1://Addition
				cout<<"enter your numbers:\n";
				cin>>numb1,numb2;
				result= numb1+numb2;
				cout<<"Result:"<<numb1<<"+"<<numb2<<"="<<result<<endl;
				break;
			case 2://Subtraction
				cout<<"enter your numbers\n";
				cin>>numb1,numb2;
				result=numb1-numb2;
				cout<<"Result:"<<numb1<<"-"<<numb2<<"="<<result<<endl;
				break;
			case 3://Multiplication
				cout<<"enter your numbers\n";
				cin>>numb1,numb2;
				result=numb1*numb2;
				cout<<"Result:"<<numb1<<"*"<<numb2<<"="<<result<<endl;
				break;
			case 4://Division
				cout<<"enter your numbers\n";
				cin>>numb1,numb2;
				result = numb1/numb2;
				if(numb2<=0){
					cout<<"undefined:\n";
				}
				else{
					cout<<"Result:="<<numb1<<"/"<<numb2<<"="<<result<<endl;
				}
				break;
			case 5://power
				cout<<"Enter your base(x)and exponent(y):\n";
				cin>>numb1,numb2;
				result=pow(numb1,numb2);
				cout<<"Result:"<<numb1<<"^"<<numb2<<"="<<result<<endl;
				break;
			case 6://Square root
				cout<<"Enter your number(>0):\n";
				cin>>numb1;
				if(numb1<=0){
					cout<<"undefined:\n";
				}
				else{
					result=  sqrt(numb1);
					cout<<"result:"<<numb1<<"="<<result<<endl;
				}
				break;
			case 7://sine
				cout<<"Enter your angle in degrees:\n";
				cin>>numb1;
				result= sin(numb1*PI/180.0);
				cout<<"Result:"<<numb1<<"="<<result<<endl;
				break;
			case 8://Cosine
				cout<<"enter your angle in degrees:\n";
				cin>>numb1;
				result= cos(numb1*PI/180.0);
				cout<<"Result:"<<numb1<<"="<<result<<endl;
				break;
			case 9://Tangent
				cout<<"Enter your angle in degrees:\n";
				cin>>numb1;
				result = tan(numb1*PI/180.0);
				cout<<"Result:"<<numb1<<"="<<result<<endl;
				break;
			case 10://Natural Logritm 
				cout<<"Enter your numb1(>0):\n";
				cin>>numb1;
				if(numb1<=0){
					cout<<"Undefined:\n";
				}
				else{
				    result = log(numb1);
					cout<<"Result:"<<numb1<<"="<<result<<endl;
				}
				break;
			case 11:
				cout<<"Enter your number(>0):\n";
				cin>>numb1;
				if(numb1<=0){
					cout<<"Undefined:\n";
				}
				else{
					result = log10(numb1);
					cout<<"Result:"<<numb1<<"="<<result<<endl;
				}
				break;
			case 0:
				cout<<"Existing Calulator:Goodbye:\n";
				break;
			default:
				cout<<"Invalid choice:Please enter number 1 to 11:\n";
				break;
		}
	}while(choice!= 0)
	return 0;
}