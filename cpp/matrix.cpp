#include <iostream>
#include <vector>

using Matrix = std::vector<std::vector<double>>;

int main(){
  if (true) // make false to run unit tests  
  { 
    // debug section 
  }  
  else  
  {  
    ::testing::InitGoogleTest(&argc, argv);  
    std::cout << "RUNNING TESTS ..." << std::endl;  
    int ret{RUN_ALL_TESTS()};  
    if (!ret)  
      std::cout << "<<<SUCCESS>>>" << std::endl;  
    else  
      std::cout << "FAILED" << std::endl;  
  }  
  return 0;
}
