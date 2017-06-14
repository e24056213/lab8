#include <iostream> 
#include <new> 
#include <stdexcept>
#include <cstdlib> 
using namespace std; 


double * double_ptr [50]; 
int j = 0; 

void new_hand() { 

cout << "new_hand():delete double_ptr[ " << j << ", " << j+1 << "]" << endl; 
delete [] double_ptr[j++]; 
delete [] double_ptr[j++]; 

}

int main() 
{ 
  set_new_handler(new_hand); 
  for(int i = 0; i< 10; i++)
  { 
  cout << "for loop: new double_ptr[" << i << "]" << endl; 
  double_ptr[i] = new double[50000000]; 
  } 

return 0; 
} 

