#include <HelloProjConfig.h>
#include <basic/message.h>
#include <iostream>

void hello_world()
{
    std::cout << "Hello World" << std::endl;
    int j = 0;
//    for( int i = 0; i < 10; ++i )
//    {
//        ++j;
//    }
}

void print_version()
{
    std::cout << "Project version is " << HelloProj_VERSION_MAJOR << "."
              << HelloProj_VERSION_MINOR << std::endl;
}