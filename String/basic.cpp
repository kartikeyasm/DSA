#include<iostream>
#include<cctype>

using namespace std;



int getLength(char str[]){
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    return len;
}

void revStr(char str[]){
    int e=getLength(str)-1;
    int s=0;
    while(s<e){
        swap(str[s],str[e]);
        s++;
        e--;
    }

}

int main(){
    /* 
    char name[100];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Your name is: "<<name<<endl;
    cout<<"Length of your name is: "<<getLength(name)<<endl;
    revStr(name);
    cout<<"Your name in reverse: "<<name<<endl;
    revStr(name);
    char a='A';
    cout<<char(tolower(a));
 
    int arr[100];
    //If a=0, int(i)-97
    string a="ksm";
    for(char i:a){
        cout<<int(i)-97<<endl;
    }

    char str[100];
    cin.getline(str,10,'k');
    for(int i=0;i<10;i++){
        cout<<str[i];
    }
    return 0;
*/
    string s="KSM is Pro";
    cout<<s.substr(1,4);
    return 0;
}