#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"

/**
 * @brief Uma caixa eh especificada para desenho conforme os limites espaciais fornecidos para as três dimensões, sua cor e transparência
 */
class PutBox : public FiguraGeometrica
{
    //!Posicao inicial de X, Y e Z da caixa
    int x0, y0, z0;
    //!Posicao final X, Y e Z da caixa
    int x1, y1, z1;
    //!Cores do componente
    float r, g, b;
    //!Transparencia
    float a;

public:
    /**
     * @brief Construtor de PutBox, aplicando seus parametros
     */
    PutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1, float _r, float _g, float _b, float _a);

    /**
     * @brief A funcao draw de PutVoxel aplica as cores e transparencia e ativa os voxels que pertencem a caixa construida
     */
    void draw(Sculptor &t);

    //! Destrutor de PutBox
    ~PutBox();
};

#endif // PUTBOX_H
