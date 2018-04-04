#include <iostream>

using namespace std;

int main()
{
    int f=0,x=0;
    cout << "ingresa tu numero" << endl;
    cin>>x;
    f=x;
    for(int i=x-1;i>=1;i--){
        f=f*i;
    }
    cout<<"el factorial de " <<x<< "es : "<<f<<endl;
    return 0;
}
