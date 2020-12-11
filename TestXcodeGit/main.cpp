//
//  main.cpp
//  TestXcodeGit
//
//  Created by Andrew Borisov on 11.12.2020.
//

#include <iostream>

#include "TestClass.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::cout << "Second, commit to XCode\n";
    
    TestClass testClass;
    testClass.sayHello();
    
    return 0;
}
