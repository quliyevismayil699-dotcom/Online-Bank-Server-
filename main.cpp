#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout<<"Welcome to Online Bank Server"<<endl;
    int x,i=0,value, newvalue=100;
    cout<<"please enter the primary value !"<<endl;
    cin>>value;
    while (i==0) {
        cout<<"Please choose one : simple interest(1) or compound interest(2) or exit(3)"<<endl;
        cin>>x;
        if (x==1) {
           int day;
            cout<<"How many days do you save your money ?"<<endl;
            cin>>day;
            int k=1;
            while (k<=day) {
                newvalue=newvalue+value*10/100;
                cout<<newvalue<<" "<<k<<endl;
                k+=1;
            }
        }
        else if (x==2) {
            int day;
            cout<<"How many days do you save your money ?"<<endl;
            cin>>day;
            int k=1;
            while (k<=day) {
                newvalue=newvalue+newvalue*10/100;
                cout<<newvalue<<" "<<k<<endl;
                k+=1;
            }
        }
        else {
            cout<<"Thank you for using us"<<endl;
            break;
        }
    }
    return 0;
}
