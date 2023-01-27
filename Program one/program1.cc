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
    // std::cout << "Enter a relational expression
    // in the format integer arithmetic-operator
    // integer relational-operator integer: ";
    std::cin >> num1 >> arithmeticOperator >> num2;
    std::cin >> relationalOperator >> num3;

    //  booleans for the arithmetic operator and the relational operator
    /*bool isArithmeticOperatorValid = (arithmeticOperator == '+' ||
         arithmeticOperator == '-' || arithmeticOperator == '*' ||
         arithmeticOperator == '/' || arithmeticOperator == '%');*/
     /*bool isRelationalOperatorValid = (relationalOperator == '<' ||
         relationalOperator == '>');*/

    //  Checks both arithemtic and relational operator at the same time

    /*if (!isArithmeticOperatorValid && !isRelationalOperatorValid) {
      std::cout << "Unrecognized arithmetic operator ";
      std::cout << arithmeticOperator;
      std::cout << "\nUnrecognized relational operator ";
      std::cout << relationalOperator << std::endl;
      //  Individually checks both operators
    }*/ /*else if (!isArithmeticOperatorValid) {
      std::cout << "Unrecognized arithmetic operator ";
      std::cout << arithmeticOperator << std::endl;
    }*/ /*if (!isRelationalOperatorValid) {
      std::cout << "Unrecognized relational operator ";
      std::cout << relationalOperator << std::endl;
    } else {
      total++;
    }*/
    /*if (!isArithmeticOperatorValid) {
      std::cout << "Unrecognized arithmetic operator " << arithmeticOperator << std::endl;
      //break;
        }
    if (!isRelationalOperatorValid) {
      std::cout << "Unrecognized relational operator " << relationalOperator << std::endl;
      //break;
        }
    
    if (!isArithmeticOperatorValid || !isRelationalOperatorValid) { 
        break;
        continue;
        } */   
    // else {
    // switch cases for all operators
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
          }
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
            } else if (!isTrue) {
              if(!isRelationalOperatorValid)
                break;
              std::cout << num1 << " " << arithmeticOperator;
              std::cout << " " << num2 << " " << relationalOperator;
              std::cout << " " << num3 << " - Incorrect" << std::endl;
            }
            total++;  //  only add to correct if its right
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
      std::cout << correct << " of " << total << " = ";
      std::cout << std::fixed << std::setprecision(2);
      std::cout << percentCorrect;
      std::cout << "%" << std::endl;
    } else {
      percentCorrect = static_cast<double>(correct) / total * 100;
      std::cout << correct << " of " << total << " = ";
      std::cout << std::fixed << std::setprecision(2);
      std::cout << percentCorrect;
      std::cout << "%" << std::endl;
    }

    /*double percentCorrect;
      if(total==0){
        percentCorrect = 0.0;
        std::cout << correct << " of " << total << " = " << std::fixed << std::setprecision(2) << percentCorrect << "%" << std::endl;
    }
        else{
          percentCorrect = (double)correct / total * 100;
          std::cout << correct << " of " << total << " = " << std::fixed << s@@@

:setprecision(2) << percentCorrect << "%" << std::endl;
    }*/

    /*double percentCorrect = (double)correct / total * 100;
    //std::cout << correct << " of " << total << " = " << percentCorrect << "%" << std::endl;
    std::cout << correct << " of " << total << " = " << std::fixed <<
    std::setprecision(2) << percentCorrect << " % " << std::endl;

    return 0;*/
}
