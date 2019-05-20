#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"

/**
 * @brief Uma elipse eh especificada para desenho conforme a posição do centro, seus raios em pixels, bem como sua cor e transparência.
 */
class PutEllipsoid : public FiguraGeometrica
{
    //! Parametros "x", "y" e "z" do centro da elipse
    int xcenter, ycenter, zcenter;
    //! Raios das dimensoes X, Y, Z de Elipsoide
    int  rx, ry, rz;
    //!Cores
    float r, g,b;
    //!Transparencia component of voxel
    float a;

public:
    /**
     * @brief Construtor de PutEllipsoid
     */
    PutEllipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz, float _r, float _g, float _b, float _a);
    /**
     * @brief A funcao draw de PutSphere aplica as cores e transparencia e ativa os voxels que pertencem a elipse construida
     */
    void draw(Sculptor &t);
    //! Destrutor de PutEllipsoid
    ~PutEllipsoid();

};

#endif // PUTELLIPSOID_H
