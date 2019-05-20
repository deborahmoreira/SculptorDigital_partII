#ifndef CUTBOX_H
#define CUTBOX_H
#include "figurageometrica.h"

/**
 * @brief A classe CutBox define uma caixa que sera "cortada" da matriz
 */
class CutBox : public FiguraGeometrica
{
    //!Posicao inicial de X, Y e Z da caixa
    int x0, y0, z0;
    //!Posicao final X, Y e Z da caixa
    int x1, y1, z1;

public:
 /**
     * @brief Construtor de CutBox
     */
    CutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1);

    /**
     * @brief A funcao draw de CutBox remove os voxels selecionados
     */
    void draw(Sculptor &t);
    //! Destrutor de CutBox;
    ~CutBox();
};

#endif // CUTBOX_H
