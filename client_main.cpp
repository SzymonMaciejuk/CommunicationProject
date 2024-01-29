#include "src/src/ClientSocket.h"
#include "src/src/SocketException.h"
#include <iostream>
#include <string>


int main ( int argc, int argv[] )
{
  try
  {

    //Create the client socket 
    ClientSocket client_socket ( "localhost", 30000 );

    while (true)
    {
    
      try
      {
        std::string reply;

        std::string keyboardEntry;
        std::cout << "### CLIENT: Type request to host:\n";

        std::getline(std::cin, keyboardEntry);
	      client_socket << keyboardEntry;
	      client_socket >> reply;

        std::cout << "We received this response from the server:  " << reply << std::endl;

      }
      catch ( SocketException& e )
      {
      std::cout << "Exception was caught:" << e.description() << "\n";
      break;
      }
    }
  }
  catch (SocketException& e)
  {
    std::cout << "Exception was caught:" << e.description() << "\n";
  }
  
  return 0;
}