#include <iostream>

using namespace std;

int problema_2(int T);
int problema_3(int dia, int mes);
int problema_5(int N);
int problema_7(int N);
int problema_8(int A, int B, int C);
int problema_9(int N);
int problema_11(int A);
int problema_13(int N);
int problema_17(int N);

int main()
{
    int opcion=1;
        int a, b, c;
        while(opcion !=0)
        {
        cout<<"******* Ejercicios de la practica 1"<<endl;
        cout<<"Presione 1 para determinar la minima cantidad de dinero "<<endl;
        cout<<"Presione 2 para verificar mes y dia "<<endl;
        cout<<"Presione 3 para crear rombo de estrellas"<<endl;
        cout<<"Presione 4 para la serie de Fibonacci"<<endl;
        cout<<"Presione 5 para la suma de los multiplos a, b y c"<<endl;
        cout<<"Presione 6 para la suma de cada uno de los numero de un entero N"<<endl;
        cout<<"Presione 7 para MCM entre 1 y numero N"<<endl;
        cout<<"Presione 8 para la suma de todos los primos de un entero N"<<endl;
        cout<<"Presione 9 para calcular numero palindromo "<<endl;
        cout<<"Presione 10 para calcular el primer numero triangular "<<endl;
        cout<<"Presione 0 para salir"<<endl;
        cin>>opcion;

       switch(opcion)
        {
          case 1:
           //Problema 2
           int T;

           cout << "Ingrese valor a determinar " << endl;
           cin >> T;
           cout<<endl<<endl;
           problema_2(T);

          break;


         case 2:
            //Problema 3
            int mes,dia;
            cout<<"Ingrese el mes: "<<endl;
            cin>>mes;
            cout<<"Ingrese el dia: "<<endl;
            cin>>dia;
            cout<<endl<<endl;
            problema_3(dia, mes);
            break;

       case 3:
           //Problema 5
           int N;
           cout<<"Ingrese un numero impar :"<<endl;
           cin>>N;
           problema_5(N);
            break;

       case 4:

           //problema 7
           cout << "Ingrese un numero: ";
           cin>>N;
           problema_7(N);
           break;

       case 5:
           //problema 8
           int A;
           int B;
           int C;
           cout << "Ingrese 3 numeros a determinar " << endl;
           cin >>A>>B>>C;
           problema_8(A, B,C);
           break;
        case 6:
           //problema 9

           cout << "Ingrese un numero: ";
           cin>>N;
           problema_9(N);
           break;

        case 7:
           //problema 11
           cout << "Ingrese numero: ";
           cin>>A;
           problema_11(A);
           break;

        case 8:
           //Problema 13
           cout << "Ingrese un numero: ";
           cin>>N;
           problema_13(N);
           break;

       case 10:
           //problema 17
           cout << "Ingrese un numero: ";
           cin>>N;
           problema_17(N);
           break;


       default:
               cout<<"Opcion no es valida"<<endl;
               break;
       }
    }
        return 0;
}


int problema_2(int T)
{
    int cincuenta_k;
    int veinte_k;
    int diez_k;
    int cincomil;
    int dosmil;
    int mil;
    int quinientos;
    int docientos;
    int cien;
    int cincuenta;

            cincuenta_k = T/50000;
        T = T%50000;    veinte_k=T/20000;
        T = T%20000;    diez_k=T/10000;
        T = T%10000;    cincomil = T/5000;
        T = T%5000;     dosmil=T/2000;
        T = T%2000;     mil=T/1000;
        T = T%1000;     quinientos = T/500;
        T = T%500;      docientos=T/200;
        T = T%200;      cien=T/100;
        T = T%100;      cincuenta = T/50;
        T = T%50;


        cout <<"50.000 = "<<cincuenta_k<<endl;
        cout <<"20.000 = "<<veinte_k<<endl;
        cout <<"10.000 = "<<diez_k<<endl;
        cout <<"5.000 = "<<cincomil<<endl;
        cout <<"2.000 = "<<dosmil<<endl;
        cout <<"1.000 = "<<mil<<endl;
        cout <<"500 = "<<quinientos<<endl;
        cout <<"200 = "<<docientos<<endl;
        cout <<"100 = "<<cien<<endl;
        cout <<"50 = "<<cincuenta<<endl;
        cout <<"Faltante = "<<T<<endl;
        cout<<endl<<endl;
}

int problema_3(int dia, int mes){
    if(mes>12)
        cout<< mes <<" es un mes invalido"<<endl;
    else if (mes==2 & dia==29)
        cout<< dia<<"/"<<mes<<" es valido en bisiesto"<<endl;
    else if(mes%2==0 & dia<=30 )
        cout<< dia<<"/"<<mes<<" es una fecha valida"<<endl;
    else if(mes%2!=0 & dia<=31)
         cout<< dia<<"/"<<mes<<" es una fecha valida"<<endl;
    else {
        cout<< dia<<"/"<<mes<<" es una fecha invalida"<<endl;
    }
        cout<<endl<<endl;
}


int problema_5(int N){
    int i=0,a=0,filas=0;
    while(a!=N){
        a=0;
        while (i!=N-(N/2)-filas-1){
             cout<<" ";
             i++;

        }
        cout<<"*";

        i=0;
        while(i!=filas){
            cout<<"**";
            i++;
            a+=2;
        }
        a++;
        i=0;
        cout<<endl;
        filas++;
    }
    while (filas!=1){
        a=N;
        filas--;
        while(i!=N-(N/2)-filas){
            cout<<" ";
            i++;
        }
        cout<<"*";
        i=1;
        while((i!=filas)&& (filas!=0)){
            cout<<"**";
            i++;
            a-=2;
        }
        a--;
        i=0;
        cout<<endl;
    }
}

int problema_7(int N){
    int i=0,a=0;

    while (i+a!=N){
        i++;
        if (i%2==0){
            a=i;

            while (a+i!=N){
                i++;
            }
            if (i==2 || i==8 || i==34 || i==68 || i==102){
                cout<<a<<"+"<<i<<"="<<N<<endl;
            }
            else{
                cout<<"No esta disponible en la serie de Fibonacci"<<endl;
            }
        }
    }
}


int problema_8(int A, int B, int C){

    int con=1;
    int suA=0;
    int suB=0;
    int con2=1;

    while ((A*con)<=C){
        suA=suA+(A*con);
        cout<<A*con;
        if ((A*con)<C){
            cout<<"+";
        }
        ++con;
    }
    con=1;
    while ((B*con2)<=C){
        con=1;
        while (con<C){

            if ((A*con)!=(B*con2)){
                ++con;

            }

            else{
                ++con2;
            }
        }

        if ((B*con2)>=C){
            break;
        }
        else{

            suB=suB+(B*con2);
            cout<<B*con2;
            ++con;

            if ((B*con2)<C){
                cout<<"+";
            }
        }
        ++con2;


    }

    cout<<"="<<suA+suB<<endl;
}

int problema_9(int N){

    int a=1,aux=0,b=0,c=0,cost=0,f=0;
    aux=N;

    while (aux%10!=0){
        a*=10;
        aux/=10;
    }
    //a/=10;
    while ((N%a)!=0){
        a/=10;
        f=N%a;
        b=N/a;
        f=b;
        for (cost=1;cost!=b;cost++){

            f=b*f;
        }
        if(cost==b){
            c=c+f;
        }
        N=N%a;


    }
    cout<<"El resultado de la suma es: "<<c<<endl;
}

int problema_11(int A){

    int B=1,cont=1,cont1=0;
    while(B<A-1){
        B++;
        if ((A*cont)!=(B*cont1)){
            for (cont=1;(A*cont)!=(B*cont1);cont++){
                if (cont==10){
                    cont1++;
                    cont=1;
                }
            }
        }
    }
    cout<<"El MCM de "<<A<<" y "<<B<<" es: "<<B*cont1<<endl;
}

int problema_13(int N){
    int su=5,i;


    for (i=4;i<=N;i++){
        if (i%2!=0 && i%3!=0){
            su=su+i;
        }
    }
    cout<<"El resultdo de la suma es: "<<su<<endl;
}

int problema_17(int N){
    int k;
    float div=2;


    k=(N*(N+1))/2;
    k+=(N+1);
    cout<<"El numero es: "<<k<<" que tiene "<<N<<" divisiores"<<endl;
}
