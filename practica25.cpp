
#include <iostream>

using namespace std;
int longitud(int arreglo[],int tamanio);
int suma(int x[],int tamanio);
int invertir(int x[],int tamanio);

void copiar(char a[],char b[]);
void juntar(char cadena1[],char cadena2[]);
int main()
{
    int x[]={1,2,3,4,5,6};
    int y[]={2,3,4,5,6,1};

    char i[]="hola";
    char t[]="chao";

    //cout<<longitud(x,6)<<endl;
    //cout<<suma(x,6)<<endl;
    //cout<<invertir(x,6)<<endl;
    //juntar(i,t);
    //cout<<i<<endl;
    //copiar(i,t);
    //cout<<i<<endl;
    //cout<<t<<endl;



    return 0;
}
int suma(int x[],int tamanio){
    int w=0;
    for(int i=0;i<=tamanio;i++){
        w=w+i;
    }
    return w;
}
int invertir(int x[],int tamanio){
    for(int i=tamanio;i>0;i--){
        cout<<i<<endl;
    }

}


int longitud(int arreglo[], int tamanio){
    int tam=0;
    for(int i=0;i<tamanio;i++){
        tam++;
    }
    return tam;
}





void copiar(char a[], char b[]){
    for(int i=0;b[i]!='\0';i++){
            if (b[i]!=a[i]){
                b[i]=a[i];
            }



    }


}

void juntar(char cadena1[],char cadena2[]){
    int c=0;
    int d=0;
    for(int i=0;cadena2[i]!='\0';i++){
        c++;
    }
    for(int i=0;cadena1[i]!='\0';i++){
        d++;
    }
    for(int i=0;i<c;i++){
            cadena1[d+i]=cadena2[i];

    }


}



