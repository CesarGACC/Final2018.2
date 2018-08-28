#ifndef PONTO3D_H
#define PONTO3D_H


class ponto3d
{
public:
    float x,y,z;
    ponto3d();
    ponto3d(float a, float b, float c);
    void add(ponto3d a);
    void add(float a);
    void sub(ponto3d a);
    void sub(float a);
    void mult(float a);
    void div(float a);

    float magnitude();
    void normalizar();
    float distancia(ponto3d a, ponto3d b);

    void pvetorial(ponto3d a, ponto3d b);
    ponto3d projecao(ponto3d a);
    float angulo(ponto3d a);

    void setX(float value);
    void setY(float value);
    void setZ(float value);
};

#endif // PONTO3D_H
