#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"

/**
 * @brief A classe CutVoxel "corta" ou retira voxels selecionados da matriz
 */
class CutVoxel : public FiguraGeometrica
{
    //! Parametros X, Y e Z de voxel
    int x, y , z;
public:
     /**
     * @brief Construtor de CutVoxel
     */
    CutVoxel(int _x, int _y, int _z);

    /**
     * @brief A funcao draw de CutVoxel desativa o voxel construido
     */
    void draw(Sculptor &t);
    //! Destrutor de CutVoxel
    ~CutVoxel();
};

#endif // CUTVOXEL_H
