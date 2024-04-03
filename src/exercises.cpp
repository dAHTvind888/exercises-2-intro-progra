
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
    cout << n_sum << endl;
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
  char str_c1, str_c2;
  string str_reverse, str2;

  if(s.size() > 100){
    cout << "your string cannot be longer than 100" << endl;
    return;
  }
  else{//str1.size() - 1 is because the the size() is one number more than the last index, so when you access
       //the str1[i] you'll get the a blank space rather than the last char
    for(int i = s.size() - 1; i >= 0; i--){
      if(s[i] != ' '){// remember that str[i] is a char so when you compare it, use '' instead of ""
        str_c1 = s[i];
        str_reverse += str_c1;
      }
      else{
        continue;
      }
    }

    for(int i = 0; i < s.size(); i++){
      if(s[i] != ' '){
        str_c2 = s[i];
        str2 += str_c2;
      }
      else{
        continue;
      }
    }
  }

  if(str_reverse == str2){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
  int f_counter = 0;

  for(int i = 0; i < s.size(); i++){
    if(s[i] == 'f'){
      f_counter += 1;
      if(f_counter == 2){
        cout << i << endl;
        return;
      }
    }
    else{
      continue;
    }
  }

  if(f_counter == 1){
    cout << "-1" << endl;
    return;
  }
  else{
    cout << "-2" << endl;
    return;
  }
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  int div_c1 = 0;
  int div_c2 = 1;

  if(a == 0 && b != 0){
    return b;
  }
  else if(a != 0 && b == 0){
    return a;
  }
  else{
    for(int i = 1; i <= a && i <= b; i++){
      if(a % i == 0 && b % i == 0){
        div_c1 = i;
        if(div_c1 > div_c2){
          div_c2 = div_c1;
        }
      }
    }
    return div_c2;
  }
}

void exercise_11() {
  // TODO: YOUR CODE HERE
  double U = 1;
  double U_aux;
  string Un = "U";
  cout << "U0 = 1" << endl;
  for(int i = 0, j = 1; i < 10; i++, j++){
    U_aux = U/(i + 1);
    cout << Un << j << " = " << U_aux << endl;
    U = U_aux;
  }
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  long result = 0; // intialize the variable, give it a value, otherwise it may cause undefined behaviour
    
  for(int i = 1; i <= n; i++){
    result += pow(i, k);
  }
  return result;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  string n_str = to_string(n);
  string n_reverse;

  for(int i = n_str.size() - 1; i >= 0; i--){
    n_reverse += n_str[i];
  }

  if(n_reverse == n_str){
    return "Es palindrome";
  }
  else{
    return "No es palindrome";
  }
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
  string num_bi, num_bi_aux;
  int remainder = 0;
    
  if(decimal == 0){
    cout << "0" << endl;
  }
  else{
    while(decimal != 0){
      remainder = decimal % 2;
      num_bi += to_string(remainder);
      decimal /= 2;
    }
    
    for(int i = num_bi.size() - 1; i >= 0; i--){
      num_bi_aux += num_bi[i];
    }
    cout << num_bi_aux << endl;    
  }
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
  int quotient = 0;
  int remainder = 0;
  int divider_aux = 0;

  if(divider == 0){
    cout << "";
    return;
  }
  else{
    divider_aux = divider;
    while(divider <= divident){
      divider += divider_aux;
      quotient++;
      if(divider > divident){
        divider -= divider_aux;
        remainder = divident - divider;
        cout << quotient << "" << remainder << endl;
        return;
      }
      else if(divider == divident){
        quotient++;
        cout << quotient << "" << remainder << endl;
        return;
      }
    }
  }
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}