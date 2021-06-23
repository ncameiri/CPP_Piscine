#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

//http://ee.usc.edu/~redekopp/cs103/slides/Unit14_Streams.pdf
//https://www.geeksforgeeks.org/stringstream-c-applications/
//https://github.com/aorji/42-CPP-pool/blob/master/d01/ex07/replace.cpp

int main(int argc, char *argv[]){

    if(argc == 4)
    {
        std::ifstream ifs(argv[1]);
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        std::string repla = ".replace";
        std::string _fileout = argv[1] + repla; 
        if(!ifs)
        {
            std::cout<<"invalid file\n";
            return (0);
        }
        if (s1.empty() || s2.empty())
        {
            std::cout<<"you let one or two arguments empty\n";
        }
        std::string act_line;
        std::string act_line_hold;
        std::ofstream ofs(_fileout);
        getline(ifs, act_line_hold); 
        while(1)
       {
           if(getline(ifs, act_line))
           {
                std::stringstream AUX2(act_line_hold);
                std::string act_word;
                std::string act_word_hold;
                AUX2 >> act_word_hold;
                while(1)
                {   if(act_word_hold == argv[2])
                        act_word_hold = argv [3];
                    if(AUX2>>act_word)
                    {
                        ofs<<act_word_hold<<" ";
                        act_word_hold = act_word;
                    }
                    else
                    {
                            ofs<<act_word_hold;
                            break;
                    }
                }
                ofs<<std::endl;
                act_line_hold = act_line;
           }
           else
           {    
                std::stringstream AUX2(act_line_hold);
                std::string act_word;
                std::string act_word_hold;
                AUX2 >> act_word_hold;
                while(1)
                {   if(act_word_hold == argv[2])
                        act_word_hold = argv [3];
                    if(AUX2>>act_word)
                    {
                        ofs<<act_word_hold<<" ";
                        act_word_hold = act_word;
                    }
                    else
                    {
                            ofs<<act_word_hold;
                            break;
                    }
                }
               break;
           }
           
       }
       }

    else 
        std::cout<<"invalid number of arguments\n";
    return (0);
}