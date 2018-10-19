#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include<math.h>

void figura();
void ejercicio2();
void ejercicio3();

int main(){
  cout<<"Bienvenido"<<endl;
  cout<<endl;
  int op=0;
  int op2=0;
  while(op==0){
    cout<<endl<<"1)ejercicio 1\n2)ejercicio 2\n3)ejercicio 3\n4)Salir"<<endl;
    cout<<endl;
    cout<<"Ingrese el número correspondiente: ";
    cin>>op2;
    cout<<endl;
    while(op2<1||op2>4){
      cout<<"Error, opcion incorrecta, ingrese otra vez: ";
      cin>>op2;      
    }
    if(op2==1){
      figura();
    }
    if(op2==2){
      ejercicio2();
    }
    if(op2==3){
      ejercicio3();
    }
    if(op2==4){
      op=1;
    }
  }
  cout<<endl;
  cout<<endl<<"Usted ha salido con exito"<<endl;
  return 0;	
}

void ejercicio2(){
   cout<<"Bienvenido al ejercicio 2"<<endl;
   cout<<endl<<"Ingrese un numero: ";
   double num=0;
   cin>>num;
   int num2=num;
   int c10=0;
   int c100=1;
   int c1000=1;
   while(num>10){
     num=num/10;
     c10=c10+1;
    // cout<<endl<<num;
     if(num>10){
       c100=c100*10;
       c1000=c1000*10;
     }
     if(num<10){
       c100=c100*1;
       c1000=c1000*10;
     }
   }
  // cout<<endl<<c100<<endl<<c1000;
   int v2=num2;
   v2=v2/c100;
   v2=v2*c100;
   double ver3=v2;
   //cout<<endl<<ver3<<endl;
   double logaritmo=ver3/c1000;
  //cout<<endl<<logaritmo<<endl;
   cout<<endl<<"log("<<num2<<")"<<"=";
   for(int i=0;i<c10;i++){
     cout<<"log("<<10<<")"<<"+";
   } 
}

void ejercicio3(){
  cout<<"Bienvenido al ejercicio 3"<<endl;
  cout<<endl<<"Ingrese m: ";
  double m=0;
  double y=0;
  double p=0;
  double result=0;
  cin>>m;
  cout<<endl<<"Ingrese y: ";
  cin>>y;
  cout<<endl<<"ingrese p: ";
  cin>>p;
  double pOrigin=p;
  double resultNew=0;
  cout<<endl;
  while(result<y){
    cout<<"el valor de aproximacion de  "<<p<<" es: ";
    result=sqrt(p);
    result=result*m;
    cout<<result<<endl;
    p=p+pOrigin;
  }
  p=p-pOrigin;
  cout<<endl<<"El valor p final es= "<<p<<endl;
}

void figura(){
  cout<<"Bienvenido a la figura"<<endl;
  cout<<endl<<"Ingrese el valor n: ";
  int n=0;
  cin>>n;
  int fil=0;
  int col=0;
  fil=2*n+2*1;
  col=2*n-1;
  cout<<endl;
  cout<<"Figura Master Race";
  for(int i=0;i<fil/2;i++){
    for(int j=fil-i;j>i;j--){
     // cout<<" ";
     // cout<<" ";
    }
    for(int j=0;j<i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}
