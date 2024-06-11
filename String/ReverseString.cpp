#include<iostream>
#include<vector>

using namespace std;

/*Q186(LC) Given a char array, reverse the order of words example: My Name is KSM    O/P: KSM is Name My*/


void rev(string &s, int f, int e){
    while(f<e){
        swap(s[f],s[e]);
        f++;
        e--;
    }
}  

void reverseWords(string &s){
    int i=0;
    int j=0;
    int len=s.size();
    while(i<len && j<=len){
        if(j==len-1){
            if(s[j]!=' '){
                int e=j;
                rev(s,i,e);
                j++;
                break;
            }
        }
        if(s[j]!=' '){
            j++;
        }
        else if(s[j]==' '){
            int e=j-1;
            rev(s,i,e);
            i=j+1;
            j=j+1;
        }

    }
}

int main(){
    string s="My Name is KSM";
    cout<<s<<endl;
    int len=s.size();
    rev(s,0,len-1);
    cout<<s<<endl;
    reverseWords(s);
    cout<<s<<endl;
}