// Universidad de La Laguna
// Escuela Superior de Ingenieria y Tecnologia
// Grado en Ingenieria Informatica
// Asignatura: Computabilidad y Algoritmia // Curso: 2o
// Practica 7: DFA 2 grammar
// Autor: Javier Garcia Santana
// Correo: alu0101391663@ull.edu.es
// Fecha: 10/11/2022
//
// Archivo cya-P07-DFA2grammar: Programa cliente
//
// Historial de revisiones
// 10/11/2022 - Creacion (primera version) del codigo

#include <fstream>
#include <iostream>
#include <vector>
#include <string>

#include "fa.h"
#include "grammar.h"
#include "usage.h"


int main(int argc, char* argv[]) {
  Usage(argc, argv);
  
  std::ifstream fa_file;
  fa_file.open(argv[1], std::ios_base::in);
  std::ofstream output;
  output.open(argv[2], std::ios_base::out);
  

  if (fa_file.is_open() && output.is_open()) {
    std::string line;
    std::vector<std::string> every_line;

    while(getline(fa_file, line)) {
      every_line.push_back(line);
    }

    Fa automata(every_line);
    Grammar gramatica(automata);
    //output << gramatica;
    gramatica.TraditionalOutput(output);
    //std::cout << gramatica;
    
  } else {
    std::cerr << std::endl << "Error al abrir el fichero de entrada :(" << std::endl << std::endl;
    return 1;
  }
  return 0;
}