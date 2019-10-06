#include <stdlib.h>
#include <stdio.h>
int main(int argc, char* argv[]) {

char operator;
operator = argv[1][0];
float a = atof(argv[2]);
float b = atof(argv[3]);
float result;

switch (operator){
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case 'x':
		result = a * b; 
		break; 
	case '/':
		result = a / b;
		break;
}
printf("%f\n", result);

}