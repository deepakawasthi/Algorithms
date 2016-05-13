#include<iostream>
#include<queue>

using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long num,rem;
    int div=10;
    cin>>num;
    queue<long> s;
    while(num){
        rem = num % div;
        num = num / div;
        s.push(rem);
    }
    while(!s.empty()){
        cout<<s.front();
        s.pop();
    }
    cout<<endl;
}
return 0;
}
