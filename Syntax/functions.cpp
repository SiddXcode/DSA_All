#include<bits/stdc++.h>   //library for everythingh
using namespace std;

//writing functions
//pass by value
void printname(string name) {
    cout<<name;
}

int sum(int x,int y, int z){
    int result=0;
    result= x+y+z;
    return result;

}
//pass by refrence  this will update the real value all operation will done on real value 
void dosomethingh(int &num){
    num+=5;
    cout<<num;
}

int main() {
string str;
cin>>str;

  printname(str);
    return 0;

    int a,b,c;
    cin>>a>>b>>c;
    int ans= sum(a,b,c);
    cout<<ans;

    int num=10;
    dosomethingh(num);
}
