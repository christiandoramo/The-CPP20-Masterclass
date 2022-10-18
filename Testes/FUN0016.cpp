#include <iostream>
#include "exercise.h"

void common_elements(int array_1[], int array_2[]){
   // REMEMBER, The input arrays array_1 and array_2 have a fixed size of 10
   
  //Don't modify anything above this line
  //Your code will go below this line
  int ar_common[10];
  int common_length{0};
  bool oneequal = false;
  for(unsigned int i{0}; i<10;i++){
      for(unsigned int j{0}; j<10; j++){
          if(array_1[i]==array_2[j]){
              oneequal=true;
              ar_common[common_length]=array_1[i];
              common_length++;
              break;
          }
      }
  }
  if(oneequal==true){
      std::cout<<"There are "<<common_length<<" common elements they are : ";
      for(unsigned int i{0}; i<common_length;i++){
          std::cout<<ar_common[i]<<" ";
      }
  }
  else{

        std::cout<<"There are 0 common elements";
  }
  //Your code will go above this line
  //Don't modify anything after this line
