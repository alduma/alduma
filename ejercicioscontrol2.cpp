#include <iostream>
using namespace std;
char regresar(char a[]);
bool verificar ( char *s_p , char * t_p){
  int tam;
  int cont=0;


  for (   tam = 0; s_p[tam] != '\0'; tam++) {
    for ( int  j = 0; t_p[j] != '\0'; j++) {
      if (s_p[tam] == t_p [j] ){
        cont++;
      }
    }
  }

  if (tam=cont) {
    return true;
  }
  else{
    return false;
  }




}





int main(){
  char s[] = "holacomoestas";
  char t[] = "qwzx";
  char v[] = "12345e+4";

  char *s_p = s;
  char *t_p = t;


  cout<< verificar(s_p, t_p );
  //cout<<regresar(v)<<endl;



  return 0;
}

char regresar(char a[]){
    int x;
    int b=0;
    int c=0;
    int v;
    for(x=0;a[x]!='\0';x++);
    cout<<a[x]<<endl;
    while(a[b]!='e'){
        b++;
    }

    v=x-b+1;
    cout<<c<<endl;
    cout<<v<<endl;
    cout<<a[v]<<endl;






}


