
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
  for(int i = 0; i <= 10; i++){
    if(s1[i] == '1'){
      cout << "Om-nom-nom :P" << endl;
    }
    else if(s1[i] == ' ' && s1[i + 1] == '1'){
      cout << "Om-nom-nom :P" << endl;
    }
    else if(s1[i] == ' ' && s1[i + 1] == '1'){
      cout << "No cake :(" << endl;
      break;
    }
    else if(s1[i] == '0'){
      cout << "No cake :(" << endl;
      break;
    }
  }
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