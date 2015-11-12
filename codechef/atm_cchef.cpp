#include<iostream>
using namespace std;

int main(){

    int draw;
    float bal;

    cin>>draw>>bal;

    if(draw>0){

        if(draw%5!=0 || draw>=bal)
            cout<<bal<<".00";

       if(bal-(float)draw-0.5==0)
            cout<<bal-(float)draw-0.50;

        else
            cout<<(bal-(float)draw-0.5)<<"0";
    }
    return 0;
}
