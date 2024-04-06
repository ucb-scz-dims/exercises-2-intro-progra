
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HERE
  string str;
    getline(cin, str); // Leer la línea desde la entrada estándar

    int indice = 0; // Inicializar el índice
    for (int i = 0; i < str.size(); i++) { // Iterar sobre cada carácter de la línea
        if (str[i] == ' ') { // Si el carácter es un espacio, imprimir el índice
            cout << indice << " ";
        }
        indice++; // Incrementar el índice para la siguiente letra
    }
    // Imprimir el índice después del último carácter de la línea
    cout << indice << endl;

    return 0;
}

void exercise_2(string s1) {
  // TODO: YOUR CODE HERE
        string word;

    for (char c : s1) {
        if (c != ' ') {
            word += c;
        } else {
            if (!word.empty()) {
                cout << "[" << word << "]" << endl;
                word = "";
            }
        }
    }

    // Si hay una palabra al final de la cadena, imprímela
    if (!word.empty()) {
        cout << "[" << word << "]" << endl;
    }
}


void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}