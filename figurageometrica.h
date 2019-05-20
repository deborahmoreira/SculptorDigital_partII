#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"
#include <iostream>

using namespace std;
/**
 * @brief A classe FiguraGeometrica eh a superclasse na qual todas as outras serao referenciadas
 */
class FiguraGeometrica
{
public:
    //! Constructor of FiguraGeometrica, used as pointer in a vector
    FiguraGeometrica();

    /**
     * @brief A função virtual pura draw(Sculptor &t) instrui o objeto a se desenhar em um objeto do tipo Sculptor. Essa função é implementada nas subclasses da classe FiguraGeometrica
     * @param t eh o endereco do Sculptor construido
     */
    virtual void draw(Sculptor &t)=0;

    //! Destrutor de FiguraGeometrica
    virtual  ~FiguraGeometrica();

};

#endif // FIGURAGEOMETRICA_H
