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
#include <string.h>
#include <fstream>
#include <sstream>

#include "alphabet.h"
#include "state.h"
#include "symbol.h"

#ifndef FA_H
#define FA_H

class Fa{
  public:

    Fa(std::vector<std::string>& input);

    void setEstadoInicial(const State& estado_inicial);

    void anadirEstado(const State& estado);
    Alphabet getAlphabet() const;
    std::vector<State> getEstados() const;
    std::vector<State> getAcceptingStates() const;
    State getInicialState() const;
    int getNumberOfTransitions() const;
    bool DfaChecker(std::vector<std::string>& input);
    void anadirEstadoAceptacion(const State& estado_aceptacion);

  private:
    Alphabet alfabeto_;
    std::vector<State> estados_;
    State estado_inicial_;
    int number_of_transitions_;
    std::vector<State> estados_aceptacion_;
};
#endif