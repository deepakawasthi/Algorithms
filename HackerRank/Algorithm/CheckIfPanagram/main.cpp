#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char ch;
    vector<char> str;
    int count = 0;
    while(cin>> ch && ch != (char)(13))
        str.push_back(ch);

    vector<char>::iterator ptr = str.begin();
    bool result[123];
    for(int i=0;i<123;i++)
        result[i]=false;

    if(str.size() > 1000 || str.size() < 1){
        cout<<"not pangram";
    }
    else{
        while(ptr != str.end()){
            if( *ptr >= 'A' && *ptr <= 'Z' ){
                if(!result[*ptr] && !result[*ptr+32]){
                    result[*ptr] = true;
                        count++;
                }
            }
                if(*ptr>='a' && *ptr <= 'z'){
                 if(!result[*ptr] && !result[*ptr-32]){
                    result[*ptr] = true;
                        count++;
                }
            }
            ptr++;
        }
        if(count == 26){
            cout<<"pangram";
        }
        else
            cout<<"not pangram";
    }
    return 0;
}
