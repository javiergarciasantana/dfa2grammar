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
#include "symbol.h"

std::ostream& operator<<(std::ostream& out, const Symbol& symbol) {
  out << symbol.symbol_;
  return out;
}
bool Symbol::operator==(const Symbol& other_symbol) const {
  if (symbol_ == other_symbol.symbol_) {
    return true;
  } else {
    return false;
  }
}

bool Symbol::operator<(const Symbol& other_symbol) const {
  if (symbol_ == "S") {
    return true;
  } else if(other_symbol.symbol_ == "S") {
    return false;
  } else {
    return symbol_ < other_symbol.symbol_;
  }
}