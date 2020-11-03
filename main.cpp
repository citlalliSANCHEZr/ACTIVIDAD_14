#include "arreglo.h"
#include<iostream>
#include "computadora.h"

using namespace std;
int main()
{
    Arreglo<Computadora>computadoras;

    Computadora C01("windows","citlalli",45,46.8);
    Computadora C02("linux","adela",42,35.1);
    Computadora C03("macios","fernando",53,61.3);

    computadoras<<C01<<C02<<C03<<C02<<C02;
    Computadora C04("linux","adela",42,35.1);

    Arreglo<Computadora*>ptrs=computadoras.buscar_todos(C04);
    if(ptrs.size()>0)
    {
        for(size_t i=0;i<ptrs.size();i++)
        {
            Computadora *p= ptrs[i];
            cout<<*p<<endl;
        }
    }else{
        cout<<"no exixten coincidencias"<<endl;
    }

    /*Computadora *ptr=computadoras.buscar(C04);
    if(ptr!=nullptr)
    {
        cout<<*ptr<<endl;

    }
    else
    {
        cout<<"no existe"<<endl;
    }



    Arreglo<string>arreglo;

    arreglo.insertar_final("5_SEPTIEMBRE");
    arreglo.insertar_final("6_OCTUBRE");
    arreglo.insertar_final("7_NOVIENBRE");
    arreglo.insertar_final("8_DIECIEMBRE");
    arreglo.insertar_inicio("4_AGOSTO");
    arreglo.insertar_inicio("3_JULIO");
    arreglo.insertar_inicio("2_JUNIO");
    arreglo.insertar_inicio("1_MAYO");
    arreglo.insertar("citlalli",2);

     for(size_t i=0; i<arreglo.size(); i++)
     {
         cout<< arreglo[i]<<" ";
         cout<<endl;

     }
     cout<<endl;
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
    for(size_t i=0; i<arreglo.size(); i++)
     {
         cout<< arreglo[i]<<" ";
         cout<<endl;

     }
    string *v=arreglo.buscar("1_MAYO");
    cout<<v<<" "<<endl;
    *v="hola";
    for(size_t i=0; i<arreglo.size(); i++)
     {
         cout<< arreglo[i]<<" ";
         cout<<endl;

     }*/
     return 0;
}
