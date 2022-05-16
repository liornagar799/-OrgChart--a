#include "OrgChart.hpp"

std::vector<string>::iterator ariel::OrgChart::end(){
vector<string> ans;
return ans.begin();
}
std::vector<string>::iterator ariel::OrgChart::begin(){
vector<string> ans;
return ans.begin();
}

ariel::OrgChart ariel::OrgChart::add_root(string root){   
return *this; 
}   

  
ariel::OrgChart ariel::OrgChart::add_sub(string one,string two){
return *this;
}

std::vector<string>::iterator ariel::OrgChart::begin_level_order(){
vector<string> ans;
return ans.begin();
}
vector<string>::iterator ariel::OrgChart::end_level_order(){
vector<string> ans;
return ans.end();
}

vector<string>::iterator ariel::OrgChart::begin_reverse_order(){
vector<string> ans;
return ans.begin();
}

vector<string>::iterator ariel::OrgChart::reverse_order(){
vector<string> ans;
return ans.end();
}

vector<string>::iterator ariel::OrgChart::begin_preorder(){
vector<string> ans;
return ans.begin();
}

vector<string>::iterator ariel::OrgChart::end_preorder(){
vector<string> ans;
return ans.end();
}



ostream& ariel::operator<<(ostream& os, ariel::OrgChart const& OrgChart1){
 return os;
}

