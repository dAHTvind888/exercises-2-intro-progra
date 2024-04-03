
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HERE
  for(int i = 0; i <= s1.size(); i++){
    if(s1[i] == ' '){
      cout << i<< endl;
    }
    else if(i == s1.size()){
      cout << i << endl;
    }
  }
}

void exercise_2(string s1) {
  // TODO: YOUR CODE HERE
  string word;

  if(s1 == ""){
    cout << "";
  }

  else{
    for(int i = 0; i <= s1.size(); i++){
      if(s1[i] == ' '){
        cout << "[" << word << "]" << endl;
        word = "";
      }
      else if(i == s1.size()){
        cout << "[" << word << "]" << endl;
      }
      else{
        word += s1[i];
      }
    }
  }
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
  for(int i = 0; i < 20; i += 2){
    if(s1[i] == '1'){
      cout << "Om-nom-nom :P" << endl;
    }
    else if(s1[i] == '0'){
      cout << "No cake :(" << endl;
      break;
    }
  }
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
    int factorial = 1;

    if(n > 14){
        cout << "El numero es muy grande. Intentelo de nuevo" << endl;
    }
    else if(n < 0){
        cout << "El numero es negativo. Intentelo de nuevo" << endl;
    }

    else if(n == 0){
        cout << factorial << endl;
    }
    else if(n > 0){
        for(int i = 1; i <= n; i++){
            factorial *= i;
        }
        cout << factorial << endl;
    }
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  string n_str = to_string(n);
  int digit_container = 0; 
  int sum_digits = 0;
  
  if(n <= 0){
    return 0;
  }
  else{
    for(int i = 0; i < n_str.size(); ++i){
      digit_container = n_str[i] - '0';
      sum_digits += digit_container;
    }
    return sum_digits;
  }
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
  double n_sum, sum_container;
  if(n == 0){
    n_sum = 0;
    cout << n_sum
  }
  else{
    for(int i = 1; i <= n; i++){
      sum_container = pow(-1, i + 1)/ i;
      n_sum += sum_container;
    }
    cout << n_sum << endl;
  }
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