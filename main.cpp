                              //Default arguments//
#include <iostream>

using namespace std;

int volume(int l=2,int w=2, int h=2);  //Take note the values are only going to be in the function prototype//



int main()
{
    cout << volume(4,5,6);//When the parameter is empty it parses in the dafault numbers assigned to the variables//
    return 0;
}
        //also make sure u dont create functions in the int main faunction//
int volume(int l, int w, int h){

    return l*w*h;
}
