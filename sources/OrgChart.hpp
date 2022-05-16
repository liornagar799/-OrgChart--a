#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

namespace ariel{


 class OrgChart{
    private:
    

    public:
   
        
   
    OrgChart(){}
    ~OrgChart(){}
    std::vector<string>::iterator end();
    std::vector<string>::iterator begin();
    ariel::OrgChart add_root(string root);
    ariel::OrgChart add_sub(string one,string two);
    std::vector<string>::iterator begin_level_order();
    std::vector<string>::iterator end_level_order();

    std::vector<string>::iterator begin_reverse_order();
    std::vector<string>::iterator reverse_order();

    std::vector<string>::iterator begin_preorder();
    std::vector<string>::iterator end_preorder();
    
    friend ostream& operator<<(ostream& os, OrgChart const& OrgChart1);



}; 

}
