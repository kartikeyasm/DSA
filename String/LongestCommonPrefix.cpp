#include<iostream>
#include<vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int len=strs.size();
        int i=0;
        while(i<len){
            int j=0;
            while(j<len){
                if(strs[0][i]!=strs[j][i]){
                    for(int k=0;k<i;k++){
                        ans+=strs[0][k];
                    }
                    return ans;
                }
                else{
                    j++;
                }
            }
            i++;
        }
        for(int k=0;k<i;k++){
            ans+=strs[0][k];
        }
        return ans;
        
    }

int main(){
    vector<string> strs={""};
    cout<<longestCommonPrefix(strs)<<endl;
    cout<<strs.size()<<endl;
    cout<<strs[0].size()<<endl;
    cout<<"Hello";
    return 0;
}