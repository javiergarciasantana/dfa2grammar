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

#include <string>

#include "fa.h"

#ifndef GRAMMAR_H
#define GRAMMAR_H

class Grammar {
 public:
  Grammar(const Fa& automata);
  void AssignProductions(const Fa& automata);
  void AssignNonTerminalIndicators(const int kInitialState);
  void ProductionsFormatChanger(void);

  std::ostream& TraditionalOutput(std::ostream& out);

  friend std::ostream& operator<<(std::ostream& out, const Grammar& grammar);

 private:
  Alphabet terminal_symbols_;
  Alphabet non_terminal_symbols_;
  Symbol starting_symbol_;
  std::string non_terminal_indicators_;
  int number_of_poductions_;
  std::vector<std::vector<Symbol>> productions_;//vector de vectores
};

#endif