#include <iostream>

using namespace std;
int suma(int arreglo[],int tamanio);
int invertir(int arreglo[],int tamanio);
int longitud(int arreglo[]);
int copiar(int x[],int tam,int y[], int tam2);
int concatenar(int x[], int y[]);
int main()
{
    int x[]={1,2,3,4,5,6};
    int y[]={32,43,5,23,2,1};
    //cout<<suma(x,6)<<endl;
    //cout<<invertir(x,6)<<endl;
    //cout<<longitud(x)<<endl;
    //cout<<copiar(x,6,y,6)<<endl;
    //cout<<concatenar(x,y)<<endl;



    return 0;
}
//funcion que sume los elementos de un arreglo
int suma(int arreglo[],int tamanio){
    int e=0;


    for (int i=0;i<=tamanio;i++){
        e=e+i;

    }
    return e;
}
//invertir los elementos de una arreglo
int invertir(int arreglo[],int tamanio){

    for(int i=tamanio;i>0;i--){
        cout<<i<<endl;


    }

}
//longitud de una rreglo
int longitud(int arreglo[]){
    int tam=0;
    int limite=(sizeof(arreglo)/sizeof(*arreglo));
    for(int i=0;i<=limite;i++){
        tam++;
    }
    return tam;
    }
//copie los elementos de un arreglo a en un arreglo b
int copiar(int x[],int tam,int y[], int tam2){

    for(int i=0;x[i]<tam;i++){
            if(x[i]!=y[i]){
                x[i]==y[i];
            }


        }



}
//concatene los elementos de un arreglo a en una rrglo b
int concatenar(int x[],int y[]){
    int c=0;
    int d=0;
    int e,f;
    int limite1=(sizeof(x)/sizeof(*x));
    int limite2=(sizeof(y)/sizeof(*y));
    for(int i=0;i<limite1;i++){
            c=c+i;
        for(int j=0;j<limite2;j++){
            d=d+j;

        }
        e=d+c;
        return e;


    }


}
