#include<iostream>
using namespace std;
//Check the triangle on the basis of its sides
int main(){
    int a,b,c,max,min;
    cin>>a;
    cin>>b;
    cin>>c;
    if (a>b){
        if (a>c){
            max=a;
            min=b+c;
        }
        else{
            max=c;
            min=b+a;
        }
    }
    else{
        if (b>c){
            max=b;
            min=a+c;
        }
        else{
            max=c;
            min=b+a;
        }
    }
    if (max<min){
        if (a==b && b==c){
            cout<<"Given triangle is an equilateral triangle";
        }
        else if(a==b || b==c || c==a){
            cout<<"Given triangle is an isoceless triangle";
        }
        else{
            cout<<"Given triangle is an scalene triangle";
        }
    }
    else{
        cout<<"It is not possible to create a triangle with the given sides.";
    }
    
    return 0;
}