#include <iostream>
#include <string>
using namespace std;

class curso
{
    string nombre;
    int codigo;
    int n_alumnos;
public:
    curso()
    {
        nombre = "Vacio";
        codigo = 0;
        n_alumnos = 0;
    }
    curso(int x, int y, string z)
    {
        nombre =z;
        codigo =x;
        n_alumnos=y;
    }
    const int get_code()
    {
        return codigo;
    }
    const int get_numero()
    {
        return n_alumnos;
    }
    const string get_nombre()
    {
        return nombre;
    }
    void set_code(const int x)
    {
        codigo = x;
    }
    void set_numero(const int x)
    {
        n_alumnos=x;
    }
    void set_nombre(const string x)
    {
        nombre =x;
    }

};

class ArreglodeCursos
{
    curso *s;
    int tam;
public:

    ArreglodeCursos(const curso cursos[], const int x)
    {
        s = new curso[100];
        for (int i = 0;i<x;i++)
            s[i]=cursos[i];
        tam = x;
        cout << tam;
    }
    ArreglodeCursos(const ArreglodeCursos &o)
    {
        s = o.s;
        tam = o.tam;
    }
    int gettam()
    {
        return tam;
    }

    void redimensionar(int x)
    {
        if (x<100)
            tam = x;
    }
    void pushback(curso &x)
    {
        insertar(tam-1, x);
    }
    void insertar(int position, curso &x)
    {
        if (position>=0 && position < tam){
            s[position].set_code(x.get_code());
            s[position].set_numero(x.get_numero());
            s[position].set_nombre(x.get_nombre());
            }
    }
    void remov(const int pos)
    {
        if (pos>=0 && pos < tam){
            s[pos].set_code(0);
            s[pos].set_nombre("VACIO");
            s[pos].set_numero(0);}
    }
    void clea()
    {
        for (int i =0;i<tam;i++)
            remov(i);
    }
    void mostrar_cursos()
    {
        for (int i =0;i<tam;i++){
            string x ="aceituna";
            cout <<"codigo: "<< s[i].get_code() <<endl;
        }
    }
    ~ArreglodeCursos()
    {
    }
};


