#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>

void add_plus_plus(std::ifstream& in_stream, std::ofstream& out_stream);

int main( std::cin >> file_name, std::cin >> file_output )
{
    std::ifstream fin;
    std::ofstream fout;
    
    char file_name[64];
    char file_output[64];
    
  
    
    fin.open(file_name);
    if (fin.fail())
    {
       std::cout << "Input file opening failed.\n";
       system ("pause");
       exit(1);              
    }

    fout.open(file_output);
    if (fout.fail())
    {
       std::cout << "Output file opening failed.\n";
       system ("pause");
       exit(1);                
    }
    
    add_plus_plus(fin, fout);
    fin.close();
    fout.close();
    
    std::cout << "End of editing files.\n";
    system ("pause");
    return 0;
}

void add_plus_plus(std::ifstream& in_stream, std::ofstream& out_stream)
{
     int count = 1;
     char next;
     out_stream << count << ": ";
     std::cout << count << ": ";
     in_stream.get(next);
     while (! in_stream.eof( ))
     {          
           out_stream << next;
           std::cout << next;
           if (next == '\n')
              {
              count++;
              std::cout << count << ": ";
              out_stream << count << ": ";
              }           
           in_stream.get(next);
     }
}

