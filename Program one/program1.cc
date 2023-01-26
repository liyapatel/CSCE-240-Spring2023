//Copyright 2023 Liya Patel
#include <iostream>
#include <iomanip>

int main() {
  int num1, num2, num3;
  char arithmeticOperator, relationalOperator;
  int correct = 0, total = 0;
  bool isArithmeticOperatorValid = true;

  while (true) {
    //std::cout << "Enter a relational expression in the format integer arithmetic-operator integer relational-operator integer: ";
    std::cin >> num1 >> arithmeticOperator >> num2 >> relationalOperator >> num3;

    bool isArithmeticOperatorValid = (arithmeticOperator == '+' || arithmeticOperator == '-' || arithmeticOperator == '*' || arithmeticOperator == '/' || arithmeticOperator == '%');
    bool isRelationalOperatorValid = (relationalOperator == '<' || relationalOperator == '>');

    if (!isArithmeticOperatorValid) {
      std::cout << "Unrecognized arithmetic operator " << arithmeticOperator << std::endl;
      //break;
        }
    if (!isRelationalOperatorValid) {
      std::cout << "Unrecognized relational operator " << relationalOperator << std::endl;
      //break;
        }
    /*if (!isArithmeticOperatorValid || !isRelationalOperatorValid) { 
        break;
        continue;
        } */   
    else {
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
                    std::cout << "Unrecognized arithmetic operator " << arithmeticOperator << std::endl;
                    break;
                    continue;
            }

            bool isTrue = false;
              if (relationalOperator == '<') {
                isTrue = (result < num3);
            } else { //check to make sure its greater than
                isTrue = (result > num3);
            }

            if (isTrue) {
                std::cout << num1 << " " << arithmeticOperator << " " << num2 << " " << relationalOperator << " " << num3 << " - Correct" << std::endl;
                correct++;
            } else {
                std::cout << num1 << " " << arithmeticOperator << " " << num2 << " " << relationalOperator << " " << num3 << " - Incorrect" << std::endl;
            }

                
            total++; //only add to correct if its right and only add to total if both the operators are okay
        }

        char c;
          //std::cout << "Enter 'c' to continue or 'q' to quit: ";
          std::cin >> c;
          if (c == 'q') {
            break;
        }
    }
    double percentCorrect;
    if(total==0){
      percentCorrect = 0.0;
      std::cout << correct << " of " << total << " = " << std::fixed << std::setprecision(2) << percentCorrect << "%" << std::endl;
    } else{
      percentCorrect = (double)correct / total * 100;
      std::cout << correct << " of " << total << " = " << std::fixed << std::setprecision(2) << percentCorrect << "%" << std::endl;
    }

    /*double percentCorrect;
      if(total==0){
        percentCorrect = 0.0;
        std::cout << correct << " of " << total << " = " << std::fixed << std::setprecision(2) << percentCorrect << "%" << std::endl;
    }
        else{
          percentCorrect = (double)correct / total * 100;
          std::cout << correct << " of " << total << " = " << std::fixed << std::setprecision(2) << percentCorrect << "%" << std::endl;
    }*/

    /*double percentCorrect = (double)correct / total * 100;
    //std::cout << correct << " of " << total << " = " << percentCorrect << "%" << std::endl;
    std::cout << correct << " of " << total << " = " << std::fixed <<
    std::setprecision(2) << percentCorrect << " % " << std::endl;

    return 0;*/
}
