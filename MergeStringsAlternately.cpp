// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    string str;
    string high = "news";
    string low = "paper";
    int op = high.size() + low.size();
    for(int i = 0; i<=op;i++){
        if(i<high.size()){
        str.append(high.begin()+i,high.begin()+(i+1));}
        
        cout<<str<<endl;
        
        if(i<low.size()){
        str.append(low.begin()+i,low.begin()+(i+1));}
        
        cout<<str<<endl;

    }
    cout<<str;

    

    

    return 0;
}
