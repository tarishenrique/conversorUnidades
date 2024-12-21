#ifndef AREA_H
#define AREA_H

// Tipagem das conversoes
typedef enum
{
    CENTIMETRO_QUADRADO, // centimetro quadrado
    METRO_QUADRADO,      // metro quadrado
    KILOMETRO_QUADRADO,  // quilômetro quadrado
    HECTARE,             // hectare
    ACRE,                // acre
    PE_QUADRADO,         // pé quadrado
    POLEGADA_QUADRADA    // polegada quadrada
} UnidadeArea;

void converterArea();
double area_convertida();

#endif