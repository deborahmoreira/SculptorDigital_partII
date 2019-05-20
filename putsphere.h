#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"

/**
 * @brief Uma esfera eh especificada para desenho conforme a posição do centro, seu raio em pixels, bem como sua cor e transparência.
 */
class PutSphere : public FiguraGeometrica
{
    //! Parametros "x", "y" e "z" do centro da esfera
    int xcenter, ycenter, zcenter;
    //! Parametro "raio" da esfera
    int radius;
    //!Cores
    float r, g, b;
    //!Transparencia
    float a;

public:
    /**
     * @brief Construtor de CutSphere
     */
    PutSphere(int _xcenter, int _ycenter, int _zcenter, int _radius, float _r, float _g, float _b, float _a);

    /**
     * @brief A funcao draw de PutSphere aplica as cores e transparencia e ativa os voxels que pertencem a esfera construida
     */
    void draw(Sculptor &t);
   //! Destrutor de PutSphere
    ~PutSphere();
};

#endif // PUTSPHERE_H
