#include<iostream>
using namespace std;
int top =2;
void ex(){
    for(int i=0;i<4;i++){
        cout<<top<<" ";
    }
    top++;
}
int main(){
    ex();
    ex();
    return 0;

}