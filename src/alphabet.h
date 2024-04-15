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

#ifndef ALPHABET_H
#define ALPHABET_H

#include <vector>
#include <fstream>
#include <set>

#include "symbol.h"


class Alphabet{
 public:
  Alphabet(); //Constructor por defecto
  Alphabet(const std::vector<Symbol>& input); //Constructor por parametro
  //Sobrecarga del operador de extraccion
  friend std::ostream& operator<<(std::ostream& out, const Alphabet& alphabet);
  Alphabet operator+(const Alphabet& alphabet);
  bool operator==(const Alphabet& alphabet_1);

  //Getter
  std::set<Symbol> getSymbols() const { return symbols_; }


 private:
  std::set<Symbol> symbols_;
  Symbol empty_chain_symbol_;
};

#endif  //ALPHABET_H