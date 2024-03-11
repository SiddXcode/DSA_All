#include<bits/stdc++.h>   //library for everythingh
using namespace std;

int main(){

  int day;
  cin>>day;
  switch (day)

  {
  case 1:
  cout<<"monday";
  break;          //if we dont write break then it will go to case and will continue till last 
                  //so thetre will be no use of switch 
    
  case 2:
  cout<<"tuesday";

  break;
  case 3:
  cout<<"wednesday";
  break;
  
  default:
    cout<<"invalid day";   // her no need of break it is going to be last
    return 0;
}
       }