#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>
#include <iomanip>
using namespace std;

class Computadora
{
    string sistema;
    string nombre;
    int memoria;
    float almacenamiento;

   public:
        Computadora();
        Computadora(const string &sistema,const string &nombre,int memoria,float almacenamiento);
        void setSistema(const string &v);
        string getSistema();
        void setNombre(const string &v);
        string getNombre();
        void setMemoria(int v);
        int getMemoria();
        void setAlmacenamiento(float v);
        float getAlmacenamiento();
    friend ostream& operator<<(ostream &out,const Computadora &p)
    {
        out<<left;
        out<<setw(10)<<p.sistema;
        out<<setw(10)<<p.nombre;
        out<<setw(10)<<p.memoria;
        out<<setw(10)<<p.almacenamiento;
        out<<endl;

        return out;

    }
    friend istream& operator>>(istream &in,Computadora &p)
    {
        cout<<"SISTEMA: ";
        getline(cin,p.sistema);
        cout<<"NOMBRE: ";
        getline(cin,p.nombre);
        cout<<"MEMORIA: ";
        cin>>p.memoria;
        cout<<"ALMACENAMIENTO: ";
        cin>>p.almacenamiento;

        return in;
    }
    bool operator==(const Computadora& p)
    {
        return nombre==p.nombre;
    }
    bool operator==(const Computadora& p)const
    {
        return nombre==p.nombre;
    }

};
#endif
