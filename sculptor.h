#ifndef SCULPTOR_H
#define SCULPTOR_H

#include <string>

/**
 * @brief O struct Voxel e comporta três tipos de informações: cor, transparência e se ele deverá ser incluído ou não no modelo digital que representa a escultura.
 */
struct Voxel {

    //!Cores
    float r,g,b;
    //!Transparencia
    float a;
    //!Se será incluido ou nao no modelo
    bool isOn;
};

/**
 * @brief A classe Sculptor é necessária para manipular os pixels (Voxels) da matriz tridimensional
 */
class Sculptor {
protected:

  Voxel ***v;
  //! nx,ny,nz sao as dimensoes X, Y, Z  do cubo
  int nx, ny, nz;
  //!Guarda as cores r-g-b do componente
  float r,g,b;
  //!Guarda a transparencia do componente
  float a;
public:
  /**
   * @brief O construtor de Sculptor, irá selecionar X, Y e Z, através das variáveis tx, ty, tz, respectivamente e alocar dinamicamente uma matriz 3D
   */
  Sculptor(int tx,int ty,int tz);
  /**
   * @brief O metodo setColor altera a cor e a transparencia atual
   */
  void setColor(float _r, float _g, float _b, float alpha);

  /**
   * @brief O metodo putVoxel ativa o voxel na posição (x,y,z) (fazendo isOn = true) e atribui ao mesmo a cor atual de desenho
   */
  void putVoxel(int x, int y, int z);

  /**
   * @brief O metodo cutVoxel ativa todos os voxels no intervalo x∈[x0,x1], y∈[y0,y1], z∈[z0,z1] e atribui aos mesmos a cor atual de desenho
   */
  void cutVoxel(int x, int y, int z);

  /**
   * @brief O metodo writeOFF grava a escultura no formato OFF no arquivo filename
   */
  void writeOFF(const std::string filename);

  /**
   * @brief O metodo writeVECT grava a escultura no formato VECT no arquivo filename
   */
  void writeVECT(const std::string filename);
  //! Destrutor de Sculptor, exclui o Sculptor construido dinamicamente
  ~Sculptor();
};
#endif // SCULPTOR_H
