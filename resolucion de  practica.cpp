#include <iostream>
using namespace std;

bool esPerfecto (int a){
  int x=0;
  for (int i=1; i < a ; i++) {
    if (a%i==0){
      x=x+i;

    }

  }
    if (a==x) {
      return true;
    }
    else {
      return false;
    }
}

int esPerfecto_1000 (){
    for (int i=1 ; i<1001; i++){
        if (esPerfecto(i)){
            cout<<i<<endl;
        }
    }
}




bool es_primo (int a){
    int b=0;
    for( int i =1 ; i< a+1 ; i++ ){
        if(a%i==0){
        b++;
        }
    }
    if(b==2){
    return true;
    }
    else{
    return false;
    }
}

int es_primo_n (int a){
  for (int  i = 0; i < a+1 ; i++) {
      if (es_primo(i)){
        cout<< i<<endl;

      }


  }
}


int potencia (int a , int b ){
    if(b==1){
        return a;
    }
    else {

        return a*potencia (a , b-1 );
    }



}
 int intercambio (int a, int b ){
    int x=a;
    a=b;
    b=x;
    cout<< a<<endl;
    return  b;



 }




int main (){

    //cout << esPerfecto(5);
    //cout<<esPerfecto_1000();
    //cout << es_primo(8);
    //cout << es_primo_n(10);
    //cout << potencia (2,5);
   // cout<< intercambio ( 3 , 4 );
   // count<< intercambio_bits  ()


   return 0;
}
