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

#include "state.h"

State::State() {}

State::State(int estado) {
  estado_ = estado;
}

void State::setEstado(int estado) {
  estado_ = estado;
}

int State::getEstado() const{
  return estado_;
}

void State::setNumTransiciones(int num_transiciones) {
  num_transiciones_ = num_transiciones;
}

int State::getNumTransiciones() {
  return num_transiciones_;
}

void State::setEsEstadoAceptacion(bool es_estado_aceptacion) {
  es_estado_aceptacion_ = es_estado_aceptacion;
}

bool State::getEsEstadoAceptacion() {
  return es_estado_aceptacion_;
}

void State::setSimbolo(Symbol simbolo) {
  simbolos_.push_back(simbolo);
}

vector<Symbol> State::getSimbolos() {
  return simbolos_;
}

void State::setTransicion(int transicion) {
  transiciones_.push_back(transicion);
}

vector<int> State::getTransiciones() {
  return transiciones_;
}

int State::getSiguienteEstado(Symbol entrada) {
  for (unsigned i = 0; i < simbolos_.size(); i++) {
    if (entrada.getSymbol() == simbolos_.at(i).getSymbol()) {
      return transiciones_.at(i);
    }
  } 
  return -1;
}

vector<int> State::getSiguientesEstados(Symbol entrada) {
  vector<int> estados_siguientes;
  for (unsigned i = 0; i < simbolos_.size(); i++) {
    if ((entrada.getSymbol() == simbolos_.at(i).getSymbol()) || (entrada.getSymbol() == "&")) {
      estados_siguientes.push_back(transiciones_.at(i));
      //cout << "añadiendo " << transiciones_.at(i) << endl;
    }
  } 
  return estados_siguientes;
}