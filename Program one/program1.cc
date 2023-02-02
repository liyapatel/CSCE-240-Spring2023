// Copyright 2023 Liya Patel
#include <iostream>
#include <iomanip>

int main() {  //  Initializing all the variables
  int num1, num2, num3;
  char arithmeticOperator, relationalOperator;
  int correct = 0, total = 0;
  //  bool isArithmeticOperatorValid = true;

  while (true) {
    total = 0;
    std::cin >> num1 >> arithmeticOperator >> num2;
    std::cin >> relationalOperator >> num3;

    
    int result;
      switch (arithmeticOperator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '%':
            result = num1 % num2;
            break;
        default:
          std::cout << "Unrecognized arithmetic operator ";
	        std::cout << arithmeticOperator << std::endl;
          break;
            continue;
        }
            total++;
            bool isRelationalOperatorValid = (relationalOperator == '<' ||
         relationalOperator == '>');
            if (!isRelationalOperatorValid) {
              std::cout << "Unrecognized relational operator ";
              std::cout << relationalOperator << std::endl;
          } else {
            total++;
            bool isTrue = false;
            if (relationalOperator == '<') {
              isTrue = (result < num3);
            } else {
              isTrue = (result > num3);
            }
            //  Correct
            if (isTrue) {
              std::cout << num1 << " " << arithmeticOperator;
              std::cout << " " << num2 << " " << relationalOperator;
              std::cout << " " << num3 << " - Correct" << std::endl;
               correct++;
            //  Incorrect
            } else {
              if(!isRelationalOperatorValid)
              break;
              std::cout << num1 << " " << arithmeticOperator;
              std::cout << " " << num2 << " " << relationalOperator;
              std::cout << " " << num3 << " - Incorrect" << std::endl;
            }
          }
            total++;
            // break;  //  only add to correct if its right
                //  and only add to total if both the operators are okay
            
            char c;
          //  std::cout << "Enter 'c' to continue or 'q' to quit: ";
            std::cin >> c;
            if (c == 'q') {
              break;
        }
    }
    double percentCorrect;
    if ( total == 0 ) {
      percentCorrect = 0.0;
    } else if (total > 0){ 
      percentCorrect = static_cast<double>(correct) / total * 100;
      std::cout << correct << " of " << total << " = ";
      std::cout << std::fixed << std::setprecision(2);
      std::cout << percentCorrect;
      std::cout << "%" << std::endl;
    } 
}
