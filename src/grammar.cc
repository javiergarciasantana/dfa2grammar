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

#include "grammar.h"

Grammar::Grammar(const Fa& automata) {
  std::string index;
  std::vector<Symbol> non_terminal_alphabet;
  terminal_symbols_ = automata.getAlphabet(); 
  number_of_poductions_ = 0;
  AssignNonTerminalIndicators(automata.getInicialState().getEstado());
  for (int i = 0; i < automata.getEstados().size(); ++i) {
    index += non_terminal_indicators_.at(i);
    Symbol aux(index);
    non_terminal_alphabet.push_back(aux);
    index.clear();
  }
  non_terminal_symbols_ = non_terminal_alphabet;
  starting_symbol_ = {"S"};
  AssignProductions(automata);
}

void Grammar::AssignProductions(const Fa& automata) {
  int aux;
  std::vector<Symbol> transition;
  for (int k = 0; k < automata.getEstados().size(); ++k) {
    transition.push_back(Symbol(non_terminal_indicators_.at(k)));
    transition.push_back(Symbol(" -> "));
    for (int i = 0; i < automata.getEstados().at(k).getTransiciones().size(); ++i) {
      aux = automata.getEstados().at(k).getTransiciones().at(i);
      for (int j = 0; j < non_terminal_symbols_.getSymbols().size() + 1; ++j) {
        if (j == aux) {
          transition.push_back(automata.getEstados().at(k).getSimbolos().at(i));
          transition.push_back(Symbol(non_terminal_indicators_.at(j)));
          transition.push_back(Symbol(char(13)));
          
          ++number_of_poductions_;
        }
      }
    }
    if (automata.getEstados().at(k).getEsEstadoAceptacion()) {
      transition.push_back(Symbol("&"));
      transition.push_back(Symbol(char(13)));
      
      ++number_of_poductions_;
    }
    productions_.push_back(transition);
    transition.clear();
  }
}

void Grammar::AssignNonTerminalIndicators(const int kInitialState) {
  for (int i = 'A', j = 0; i <= 'Z'; ++i, ++j) {
    if (j == kInitialState) {
      non_terminal_indicators_.push_back('S');
    } 
    if (i == 'S') {
      ++i;
      ++j;
    }
    non_terminal_indicators_.push_back(char(i));
  }
  //std::cout << non_terminal_indicators_ << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Grammar& grammar) {
  std::string separator = {char(13)};
  out << grammar.terminal_symbols_.getSymbols().size() - 1;
  out << grammar.terminal_symbols_;
  out << grammar.non_terminal_symbols_.getSymbols().size() << std::endl;
  out << grammar.non_terminal_symbols_;
  out << grammar.starting_symbol_ << std::endl;
  out << grammar.number_of_poductions_ << std::endl;
  for (int i = 0; i < grammar.productions_.size(); ++i) {
    for (int j = 0; j < grammar.productions_.at(i).size(); ++j) {
      out << grammar.productions_.at(i).at(j);
    }
  } 
  return out;
}

std::ostream& Grammar::TraditionalOutput(std::ostream& out) {
  ProductionsFormatChanger();
  out << "Alfabeto= " << terminal_symbols_ << std::endl;
  out << "V= " << non_terminal_symbols_ << std::endl;
  out << "Simbolo de arranque= " << starting_symbol_ << std::endl;
  for (int i = 0; i < productions_.size(); ++i) {
    for (int j = 0; j < productions_.at(i).size(); ++j) {
      out << productions_.at(i).at(j);
    }
  } 
  return out;
}

void Grammar::ProductionsFormatChanger(void) {
  for (int i = 0; i < productions_.size(); ++i) {
    for (int j = 0; j < productions_.at(i).size(); ++j) {
      if (productions_.at(i).at(j) == Symbol(char(13)) && j != productions_.at(i).size() - 1) {
        productions_.at(i).at(j) = Symbol("|");
      }
    }
  } 
}