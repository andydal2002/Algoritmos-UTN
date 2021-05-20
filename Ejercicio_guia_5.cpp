#include <iostream>
using namespace std;

void cargar(int[], unsigned);
int notaMax(int[], unsigned cant);
void mostrarInverso(int v[], unsigned cant);
int sumar(int v[], unsigned cant);
int prom(int v[], unsigned cant);
void mayoresProm (int v[], unsigned cant, int prom);
void mostrar (int[], unsigned);
int mayor (int v[], unsigned cant, int &pos);
int menor (int v[], unsigned cant, int &pos);

int main()
{  
    //EJERCICIO 1 
    /*
    int nros[30];
    cargar(nros, 30);
    cout<<"Nota maxima: "<<notaMax(nros, 30);
    */

    //EJERCICIO 2
    /*
    int nros[40];
    cargar(nros, 40);
    mostrarInverso(nros, 40);
    */

    //EJERCICIO 3
    /*
    int edades[5], promedio;
    cargar(edades, 5);
    promedio= prom(edades, 5);
    mayoresProm(edades, 5, promedio);
    */

    //EJERCICIO 4
    /*
    int nros[5], posMayor=0, posMenor=0;
    cargar(nros, 5);
    mostrar(nros, 5);

    mayor(nros, 5, posMayor);
    menor(nros, 5, posMenor);

    cout<<"Mayor valor: "<<mayor(nros, 5, posMayor)<<"    Posicion: "<<posMayor<<endl;
    cout<<"Menor valor: "<<menor(nros, 5, posMenor)<<"    Posicion: "<<posMenor<<endl;
    */
   
    return 0;
}

void cargar(int v[], unsigned cant)
{
    for(int i=0; i<cant; i++)
    {
        cout<<"Ingrese un numero: ";
        cin>>v[i];
    }
}

int notaMax(int v[], unsigned cant)
{
    int mayor;
    for(int i=0; i<cant; i++)
    {
        if (i==0 || v[i]>mayor)
            mayor=v[i];
    }
    return mayor;
}

void mostrarInverso(int v[], unsigned cant)
{
    for(int i=cant-1; i>=0; i--)
    {
        cout<<v[i]<<" ";
    }
}

int sumar(int v[], unsigned cant)
{
    int suma=0;
    for(int i=0; i<cant; i++)
        suma+=v[i];
    return suma;
}

int prom(int v[], unsigned cant)
{
    return sumar(v, cant)/cant;
}

void mayoresProm (int v[], unsigned cant, int prom)
{
    for(int i=0; i<cant; i++)
    {
        if(v[i]>prom)
            cout<<v[i]<<" ";
    }
}

void mostrar (int v[], unsigned cant)
{
    cout<<"Contenido del vector: ";
    for(int i=0; i<cant; i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

int mayor (int v[], unsigned cant, int &posMa)
{
    int mayor;
    for(int i=0; i<cant; i++)
    {
        if(i==0 || v[i]>mayor)
        {
            mayor=v[i];
            posMa=i;
        }
    }
    return mayor;
}

int menor (int v[], unsigned cant, int &posMe)
{
    int menor;
    for(int i=0; i<cant; i++)
    {
        if(i==0 || v[i]<menor)
        {
            menor=v[i];
            posMe=i;
        }
    }
    return menor;
}