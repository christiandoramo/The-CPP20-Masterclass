//exercise: figure out if the array given is sorted in incrementing order or not


#include <iostream>
#include "exercise.h"

bool is_collection_sorted(int numbers[], unsigned int collection_size){


  // Don't modify anything above this line
  //Your code will go below this line
  

  bool sorted;
  
 for(unsigned int i{1}; i<collection_size; i++){
     sorted = false;
     for(unsigned int j{0}; j<i; j++){
         if(numbers[i]>=numbers[j]){
             sorted = true;
         }
         else{
             sorted = false;
             break;
         }
     }
     if(!sorted){
         break;
     }
 }
 
  //Your code will go above this line
  //Don't modify anything below this line

  return sorted;
}
