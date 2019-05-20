#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"

/**
 * @brief A classe CutSphere define uma esferaque sera removida da matriz
 */
class CutSphere : public FiguraGeometrica
{
    //! Parametros "x", "y" e "z" do centro da esfera
    int xcenter, ycenter, zcenter;
    //! Parametro "raio" da esfera
    int radius;
public:
    /**
     * @brief Construtor de CutSphere
     */
    CutSphere(int _xcenter, int _ycenter, int _zcenter, int _radius);

    /**
     * @brief A funcao draw de CutSphere aplica as cores e transparencia e ativa os voxels que pertencem a esfera construida
     */
    void draw(Sculptor &t);

    //! Destrutor de CutSphere
    ~CutSphere();

};

#endif // CUTSPHERE_H
