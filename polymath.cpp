#include<iostream>
#include<cmath>
using namespace std;
void showMenu(){
    cout<<"======Sientific Calculator====\n";
    cout<<"1. Addition (+)\n";
    cout<<"2. Subtraction (-)\n";
    cout<<"3. Multiplication(*)\n";
    cout<<"4. Division (/)\n";
    cout<<"5. Power (x^y)\n";
    cout<<"6. Square Root (sqrt(x))\n";
    cout<<"7. Sine (sin(x) in degrees)\n";
    cout<<"8, Cosine(cos(x)in degrees)\n";
    cout<<"9. Tangent(Tan(x)in degrees)\n";
    cout<<"10. Natural Logritim(ln(x))\n";
    cout<<"11. Logritm Base 10(log10(x))\n";
    cout<<"12. Multiplication(*)\n";
    cout<<"0. Exit\n";
    cout<<"Enter your Choice:\n";
}
int main(){
    int choice;
    double numb1,numb2,result;
    const double PI = 3.14;
    {
        showMenu();
        cin>>choice;

        switch(choice){
            case 1://Addition
                cout<<"Enter your numbers:";
                cin>>numb1,numb2;
                result = numb1+numb2;
                cout<<"Result:"<<numb1<<"+"<<numb2<<"="<<result<<endl;
                break;
            case 2://Subtraction
                cout<<"Enter your numbers:";
                cin>>numb1>>numb2;
                result = numb1-numb2;
                cout<<"Result:"<<numb1<<"-"<<numb2<<"="<<result<<endl;
                break;
            case 3://Multiplication
                cout<<"Enter your numbers:\n";
                cin>>numb1>>numb2;
                result = numb1*numb2;
                cout<<"Result:"<<numb1<<"*"<<numb2<<"="<<result<<endl;
            case 4://Division
                cout<<"Enter your Numinator and Denominator:\n";
                cin>>numb1>>numb2;
                result = numb1/numb2;
                if(numb2 == 0){
                    cout<<"Error:Division by zero is not Allowed:\n";
                }
                else{
                    cout<<"Result:"<<numb1<<"/"<<numb2<<"="<<result<<endl;
                }
                break;
            case 5://power(x^y)
                cout<<"Enter base(x) and exponent(y):\n";
                cin>>numb1>>numb2;
                result = pow(numb1,numb2);
                cout<<"Result:"<<numb1<<"^"<<numb2<<"="<<result<<endl;
                break;
            case 6://Square root
                cout<<"Enter your numbers:\n";
                cin>>numb1;
                if(numb1<0){
                    cout<<"undefined:\n";
                }
                else{
                    result = sqrt(numb1);
                    cout<<"Result:Square root"<<numb1<<"="<<result<<endl;
				    }   
                break;
            case 7://Sine
                cout<<"Enter your angle in degrees:";
                cin>>numb1;
                result = sin(numb1*PI/180.0);
                cout<<"Result:sine(numb1)="<<result<<endl;
                break;
            case 8://Cosine
                cout<<"Enter your angle in degrees:\n";
                cin>>numb1;
                result = cos(numb1*PI/180.0);
                cout<<"Result:cosine(numb1)="<<result<<endl;
                break;
            case 9://tangent
                cout<<"Enter your angle in degrees:\n";
                cin>>numb1;
                result = tan(numb1*PI/180.0);
                cout<<"Result:tan(numb1)="<<result<<endl;
                break;
            case 10://Nautral Algorithm
                cout<<"Enter your number(>0):\n";
                cin>>numb1;
                if(numb1<=0){
                    cout<<"Undefined :\n";
            }
                else{
                    result = log(numb1);
                    cout<<"Result:log(numb1)="<<result<<endl;
            }
                break;
            case 11://Logrithm Base 10
                cout<<"Enter your number(>0):\n";
                cin>>numb1;
                if(numb1<=0){
                    cout<<"undefined:\n";
            }
                else{
                    result = log10(numb1);
                    cout<<"Result:log10(numb1)="<<result<<endl;
            }
                break;
            case 0:
                cout<<"Exiting Calculator:Goodbye!:\n";
                break;
            default:
                cout<<"Invalid choice:Please choice between 0 and 11:\n";
                }
    }while(choice!=0);
    return 0;
}
