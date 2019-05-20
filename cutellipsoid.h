#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"

/**
 * @brief  Uma elipse eh especificada para remoção conforme a posição do centro e seus raios em pixels.
 */
class CutEllipsoid : public FiguraGeometrica
{
    //! Parametros "x", "y" e "z" do centro da elipse
    int xcenter, ycenter, zcenter;
    //! Raios das dimensoes X, Y, Z de Elipsoide
    int  rx, ry, rz;
public:
    /**
     * @brief Construtor de CutEllipsoid
     */
    CutEllipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz);

    /**
     * @brief A funcao draw de PutSphere aplica as cores e transparencia e remove os voxels que pertencem a elipse construida
     */
    void draw(Sculptor &t);

    //! Destrutor de CutEllipsoid
    ~CutEllipsoid();
};

#endif // CUTELLIPSOID_H
