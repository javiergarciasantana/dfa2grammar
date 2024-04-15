// Universidad de La Laguna
// Escuela Superior de Ingenieria y Tecnologia
// Grado en Ingenieria Informatica
// Asignatura: Computabilidad y Algoritmia // Curso: 2o
// Practica 7: DFA 2 grammar
// Autor: Javier Garcia Santana
// Correo: alu0101391663@ull.edu.es
// Fecha: 10/11/2022
//
// Archivo cya-P07-DFA2grammar:
//
// Historial de revisiones
// 10/11/2022 - Creacion (primera version) del codigo

#include <iostream>
#include <vector>
#include <string>

#include "symbol.h"

#ifndef STATE_H
#define STATE_H

using std::vector;

class State {
  public:
    State();
    State(int);

    void setEstado(int);
    int getEstado() const;

    void setNumTransiciones(int);
    int getNumTransiciones();

    void setEsEstadoAceptacion(bool);
    bool getEsEstadoAceptacion();

    void setSimbolo(Symbol);
    vector<Symbol> getSimbolos();

    void setTransicion(int);
    vector<int> getTransiciones();

    int getSiguienteEstado(Symbol);

    vector<int> getSiguientesEstados(Symbol entrada);

  private:
    int estado_, num_transiciones_;
    bool es_estado_aceptacion_;
    vector<Symbol> simbolos_;
    vector<int> transiciones_;
};

#endif