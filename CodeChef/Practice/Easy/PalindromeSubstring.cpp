#include<iostream>
#include<malloc.h>

using namespace std;

int main(){
int t;
cin>>t;
while(t){
    char *s1,*s2;
    cin>>s1>>s2;
    bool isPalindrome = false;
    {
        char* ptr1=s1,*ptr2=s2;
        int resArr1[26],resArr2[26];
        for(int j=0;j<=25;j++){
            resArr1[j] = resArr2[j] = 0;
        }
        while(*ptr1 != '\0'){
            resArr1[*ptr1-'a'] = 1;
            ptr1++;
        }
        while(*ptr2 != '\0'){
            resArr2[*ptr2-'a'] = 1;
            ptr2++;
        }
        for(int i=0;i<=25;i++){
            if(resArr1[i] == 1 && resArr2[i] == 1){
                isPalindrome = true;
                break;
            }
        }
        delete [] s1;
        delete [] s2;
        ptr1=ptr2=NULL;
    }
    if(isPalindrome == true){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    t--;
}
return 0;
}


        //Now check if 2 substring of s1 and s2 will make palindrome
//        for(int i=0;i<=25;i++){
//            if(resArr1[i] != 0 && resArr2[i] != 0){
//                isPalindrome = true;
//                break;
//            }
//            else if(resArr2[i] != 0 && resArr2[i]%2 == 0){
//                isPalindrome = true;
//                break;
//            }
//            else if(resArr1[i]%2 == 0){
//                isPalindrome = true;
//                break;
//            }
//            else{
//                break;
//            }
//        }
