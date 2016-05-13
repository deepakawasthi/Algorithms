#include<iostream>
#include<queue>

using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long num,temp,rem;
    int div=10;
    cin>>num;
    temp = num;
    queue<long> s;
    while(temp){
        rem = temp % div;
        num = temp / div;
        s.push(rem);
    }

    cout<<s.front()+s.back()<<endl;
}
return 0;
}
