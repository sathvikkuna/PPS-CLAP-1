#include <stdio.h>

int main() {
  char category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  int userinputF;
  int userinputC;
  int userinputINRtoUSD;
  int userinputUSDtoINR;
  int userinputkg;
  int userinputGram;
  int fahrenheitToCelcius;
  int celciusToFahrenheit;
  float INRtoUSD ;
  float USDtoINR;
  float kgTograms;
  float gramsToKg;

  printf("Welcome to Unit Converter! \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T),Currency(C),Mass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);

  if(category == 'T'){
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }

  else if(category == 'C') {
      printf("Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for INR to USD. \n");
      printf("Enter 2 for USD to INR. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the INR amount: \n");
          scanf("%d",&userinputINRtoUSD);
          INRtoUSD = userinputINRtoUSD * 0.013;
          printf("USD: %.3f",INRtoUSD);
      }
      else if(currencyChoice == 2){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoINR);
          USDtoINR = userinputUSDtoINR * 76.24;
          printf("INR: %.3f",USDtoINR);
      }
      else
        printf("Please enter correct choice. \n");
   }
  else if(category == 'M'){
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Kilograms to grams. \n");
      printf("Enter 2 for grams to kilograms. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the kilograms amount: \n");
          scanf("%d",&userinputkg);
          kgTograms = userinputkg * 1000;
          printf("Grams: %.2f",kgTograms);
      }
      else if(massChoice == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToKg = userinputGram * 0.001;
          printf("kilograms: %.2f",gramsToKg);
      }
      else
        printf("Please enter the correct choice. \n");
   }
  return 0;
}
