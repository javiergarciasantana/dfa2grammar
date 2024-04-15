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
#include "usage.h"

void Usage(int argc, char* argv[]) {
    
  if (argc != 3) {  
    if (argc == 2) {
      std::string ayuda = "--help";
      if (ayuda == argv[1]) {
        std::cerr << "Modo de empleo: ./p07_dfa2grammar input.fa output.gra" <<std:: endl
            << std::endl << "Reportar fallos a: alu0101391663@ull.edu.es" << std::endl;
        exit(EXIT_SUCCESS);
      } else {
        std::cerr << "Número erroneo de parámetros..." << std::endl
           << "Modo de empleo: ./p07_dfa2grammar input.fa output.gra" << std::endl
           << "Pruebe ‘./p07_dfa2grammar --help’ para más información." << std::endl;
        exit(EXIT_SUCCESS);
      }
    } else {
      std::cerr << "Número erroneo de parámetros..." << std::endl
           << "Modo de empleo: ./p07_dfa2grammar input.fa output.gra" << std::endl
           << "Pruebe ‘./p07_dfa2grammar --help’ para más información." << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
}