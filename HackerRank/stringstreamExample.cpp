#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   vector<int>temp;
    stringstream st;
    st<<str<<',';
    cout<<st.str().size()<<endl;
    return temp;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    cout<<"vector Size : "<<integers.size();
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
