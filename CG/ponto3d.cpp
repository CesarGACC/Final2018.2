#include "ponto3d.h"
#include <math.h>
void ponto3d::setX(float value)
{
    x = value;
}

void ponto3d::setY(float value)
{
    y = value;
}

void ponto3d::setZ(float value)
{
    z = value;
}

ponto3d::ponto3d()
{
    setX(0);
    setY(0);
    setZ(0);
}

ponto3d::ponto3d(float a, float b, float c)
{
    setX(a);
    setY(b);
    setZ(c);
}

void ponto3d::add(ponto3d a)
{
    setX(x+a.x);
    setY(y+a.y);
    setZ(z+a.z);
}

void ponto3d::add(float a)
{
    setX(x+a);
    setY(y+a);
    setZ(z+a);
}

void ponto3d::sub(ponto3d a)
{
    setX(x-a.x);
    setY(y-a.y);
    setZ(z-a.z);
}

void ponto3d::sub(float a)
{
    setX(x-a);
    setY(y-a);
    setZ(z-a);
}

void ponto3d::mult(float a)
{
    setX(x*a);
    setY(y*a);
    setZ(z*a);
}

void ponto3d::div(float a)
{
    setX(x/a);
    setY(y/a);
    setZ(z/a);
}

float ponto3d::magnitude()
{
    return sqrt(x*x+y*y+z*z);
}

void ponto3d::normalizar()
{
    float m = magnitude();
    x = x/m;
    y = y/m;
    z = z/m;
}

float ponto3d::distancia(ponto3d a, ponto3d b)
{
    return sqrt((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y) + (b.z-a.z)*(b.z-a.z));
}

void ponto3d::pvetorial(ponto3d a, ponto3d b)
{
    x = a.y*b.z - a.z*b.y;
    y = a.z*b.x - a.x*b.z;
    z = a.x*b.y - a.y*b.x;
}

ponto3d ponto3d::projecao(ponto3d a)
{
    float a1;
    a1 = this->magnitude()*this->angulo(a);
    ponto3d a2;
    a2 = ponto3d(x,y,z);
    a2.sub(a1);
    return a2;
}

float ponto3d::angulo(ponto3d a)
{
    //Cos do angulo
    return (x*a.x+y*a.y+z*a.z)/((this->magnitude())*(a.magnitude()));
}

