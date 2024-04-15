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

#include "fa.h"

Fa::Fa(std::vector<std::string>& input) {
  if (!DfaChecker(input)) {
    std::vector<Symbol> symbols;
    std::string aux;
    std::string alfabeto = input.at(0);
    for (unsigned i = 0; i < input.size(); i++) {
      std::vector<std::string> palabras_fa;
      std::stringstream ss_linea_nfa(input.at(i));
      std::string palabra;
      while (getline(ss_linea_nfa, palabra, ' ')) {
        palabras_fa.push_back(palabra);
      }
      switch (i) {
        case 0:
          for (int i = 0; i < alfabeto.size(); ++i) {
            if (alfabeto.at(i) == ' ') {
              ++i;
            } 
            aux += alfabeto.at(i);
            symbols.push_back(Symbol(aux));
            aux.clear();
            
          }
          alfabeto_ = symbols;
          break;
        case 1:
          if (input.at(1).size() == 1) {
            if (input.size() - 2 < atoi(input.at(1).c_str())) {
              std::cout << std::endl << "ERROR: Faltan estados por definir en el fichero de entrada" << std::endl;
              exit(EXIT_SUCCESS);
            }
          } else {
            std::cout << std::endl << "ERROR: Demasiados argumentos indicados" << std::endl;
            exit(EXIT_SUCCESS);
          }
          break;
        
        case 2:
          if (input.at(2).size() == 1) {
            setEstadoInicial(atoi(input.at(2).c_str()));
          } else {
            std::cout << std::endl << "ERROR: Sólo puede haber un estado inicial..." << std::endl;
            exit(EXIT_SUCCESS);
          }
          break;
        
        default:
          if (i > 1) {
            State estado;
            int aux = 0;

            for (unsigned j = 0; j < palabras_fa.size(); j++) {
              switch (j) {
                case 0:
                  estado.setEstado(atoi(palabras_fa[j].c_str()));
                  break;

                case 1:
                  estado.setEsEstadoAceptacion(atoi(palabras_fa[j].c_str()));
                  break;

                case 2:
                  estado.setNumTransiciones(atoi(palabras_fa[j].c_str()));
                  number_of_transitions_ = atoi(palabras_fa[j].c_str());
                  break;
          
                default:
                  if (aux == 0) {
                    aux++;
                    estado.setSimbolo(Symbol(palabras_fa[j]));
                  } else {
                    aux = 0;
                    estado.setTransicion(atoi(palabras_fa[j].c_str()));
                  }
                  break;
              }
            } 
            if (aux) {
              std::cout << std::endl << "El formato del fichero no es correcto..." << std::endl;
              exit(EXIT_SUCCESS);
            }
            anadirEstado(estado);
            if (estado.getEsEstadoAceptacion()) {
              anadirEstadoAceptacion(estado);
            }
            if (i != input.size() - 1) {
              palabras_fa[palabras_fa.size() - 1].erase(palabras_fa[palabras_fa.size() - 1].size() - 1);
            }
          }
          break;
      }
    }
  } else {
    std::cout << std::endl << "No es un DFA" << std::endl;
    exit(EXIT_SUCCESS);
  }
}
bool Fa::DfaChecker(std::vector<std::string>& input) {
  std::vector<char> comparables;
  std::string index;
  bool result = false;
  for (int i = 3; i < input.size(); ++i) {
    index = input[i];
    for (int j = 6; j < index.size(); ++j) {
      comparables.push_back(index[j]);
      j += 3;
    }
    
    for (int k = 0; k < comparables.size(); ++k) {
      for (int l = k + 1; l < comparables.size(); ++l) {
        if (comparables[k] == comparables[l]) {
          result = true;
        }
      }
    }
    comparables.clear();
  }
  return result; 
}

void Fa::setEstadoInicial(const State& estado_inicial) {
  estado_inicial_ = estado_inicial;
}

void Fa::anadirEstado(const State& estado) {
  estados_.push_back(estado);
}

void Fa::anadirEstadoAceptacion(const State& estado_aceptacion) {
  estados_aceptacion_.push_back(estado_aceptacion);
}

// bool Fa::comprobarCadena(const Chain& cadena) {
//   State estado_actual;
//   estado_actual = estados_.at(estado_inicial_.getEstado());
//   for (unsigned i = 0; i < cadena.getChain().size(); i++) {
//     Symbol entrada(cadena.getChain().at(i));
//     if (estado_actual.getSiguienteEstado(entrada) == -1) {
//       return false;
//     }
//     estado_actual = estados_.at(estado_actual.getSiguienteEstado(entrada));
//   }
//   if (estado_actual.getEsEstadoAceptacion()) {
//     return true;
//   }
//   return false;

// }

std::vector<State> Fa::getEstados() const {
  return estados_;
}

Alphabet Fa::getAlphabet() const {
  return alfabeto_;
}

std::vector<State> Fa::getAcceptingStates() const {
  return estados_aceptacion_;
}

State Fa::getInicialState() const {
  return estado_inicial_;
}

int Fa::getNumberOfTransitions() const {
  return number_of_transitions_;
}


// estados_actuales = {0}
// simbolo = 0
// estados_actuales = {0}
// simbolo = 1

// estados_actuales = {0, 1}
// simbolo = 0

// estados_actuales = {0, 2}
// simbolo = 1
// estados_actuales = {0, 1, 3}
// simbolo = 0

// estados_actuales = {0, 2}