#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"

/**
 * @brief Um voxel eh especificado para desenho conforme sua posicaoo no espaco, sua cor e transparência.
 */
class PutVoxel : public FiguraGeometrica
{
    //! Parametros X, Y e Z de voxel
    int x, y , z;
    //!Cores do componente
    float r, g, b;
    //!Transparencia do voxel
    float a;

public:
    /**
    * @brief Construtor de PutVoxel, com todos as suas caracteristicas como parametros
    */
    PutVoxel(int _x, int _y, int _z, float _r, float _g, float _b, float _a);
    /**
     * @brief A funcao draw de PutVoxel aplica as cores e transparencia e ativa o voxel construido
     */
    void draw(Sculptor &t);
    //! Destrutor de PutVoxel
    ~PutVoxel();
};

#endif // PUTVOXEL_H
