//
//  RecLinearSearch.cpp
//  Recursive Linear Search
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include "Search.hpp"

int search(int v[], int size, int key)
{
    // TO DO

    //size = size - 1;
      
      if( size < 0 ){
      		
      	return -1;
      }
      
      else if(v[size] == key){
      
      	return 1;

      }
      
      else{
      	
      	return search(v, key, size);
      
      }
}

