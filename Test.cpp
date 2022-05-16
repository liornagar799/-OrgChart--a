#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include "OrgChart.hpp"
#include <string>
using namespace std;
using namespace ariel;

 
/*
       lior
       |--------|--------|
       liam     ori     eliram
       |                 |
       haya             kobi
*/

TEST_CASE("Good input -1") {
      OrgChart organization;
      organization.add_root("lior")
      .add_sub("lior", "liam")        
      .add_sub("lior", "ori")         
      .add_sub("lior", "eliram")       
      .add_sub("liam", "haya")
      .add_sub("eliram", "kobi");    
  std::vector<string> ans={"a","b","c","d","e","f"};
  size_t t=0;
  for (auto it = organization.begin_level_order(); it != organization.end_level_order(); ++it)
  {
      ans.push_back(*it);
       t++;
  } // prints: lior liam ori eliram haya kobi

    string name1 = ans.at(0);
    string name2 = ans.at(1);
    string name3 = ans.at(2);
    string name4 = ans.at(3);
    string name5 = ans.at(4); 
    string name6 = ans.at(5); 
    
    CHECK(name1 == "lior");
    CHECK(name2 == "liam");
    CHECK(name3 == "ori");
    CHECK(name4 == "eliram");
    CHECK(name5 == "haya");
    CHECK(name6 == "kobi");


}

TEST_CASE("Good input -") {
      OrgChart organization;
      organization.add_root("lior");
      organization.add_sub("lior", "liam");         
      organization.add_sub("lior", "ori");         
      organization.add_sub("lior", "eliram");        
      organization.add_sub("liam", "haya"); 
      organization.add_sub("eliram", "kobi");     
  std::vector<string> ans={"a","b","c","d","e","f"};
  size_t t=0;
  for (auto it = organization.begin_level_order(); it != organization.end_level_order(); ++it)
  {
    ans.at(t)=*it;
    t++;     
  } // prints: lior liam ori eliram haya kobi

    string name1 = ans.at(0);
    string name2 = ans.at(1);
    string name3 = ans.at(2);
    string name4 = ans.at(3);
    string name5 = ans.at(4); 
    string name6 = ans.at(5); 
    
    CHECK(name1.size()== 4);
    CHECK(name2.size() == 4);
    CHECK(name3.size() == 3);
    CHECK(name4.size() == 5);
    CHECK(name5.size()  == 4);
    CHECK(name6.size()  == 4);


}


TEST_CASE("Good input ") {
  OrgChart organization;
organization.add_root("lior");
      organization.add_sub("lior", "liam");         
      organization.add_sub("lior", "ori");         
      organization.add_sub("lior", "eliram");        
      organization.add_sub("liam", "haya"); 
      organization.add_sub("eliram", "kobi");     
  std::vector<string> ans={"a","b","c","d","e","f"};
  size_t t=0;
    for (auto it=organization.begin_preorder(); it!=organization.end_preorder(); ++it) {
    cout << (*it) << " " ;
     t++;
  }  // prints: lior liam haya ori eliram kobi
  
    string name1 = ans.at(0);
    string name2 = ans.at(1);
    string name3 = ans.at(2);
    string name4 = ans.at(3);
    string name5 = ans.at(4); 
    string name6 = ans.at(5); 
    
    CHECK(name1 == "lior");
    CHECK(name2 == "liam");
    CHECK(name3 == "haya");
    CHECK(name4 == "ori");
    CHECK(name5 == "eliram");
    CHECK(name6 == "kobi");

}

TEST_CASE("Good input - S") {
      OrgChart organization;
      organization.add_root("lior");
      organization.add_sub("lior", "liam");         
      organization.add_sub("lior", "ori");         
      organization.add_sub("lior", "eliram");        
      organization.add_sub("liam", "haya"); 
      organization.add_sub("eliram", "kobi");     
  std::vector<string> ans={"a","b","c","d","e","f"};
  size_t t=0;
  for (auto it = organization.begin_reverse_order(); it != organization.reverse_order(); ++it)
  {
    ans.push_back(*it);
    t++;
  } // prints: haya kobi liam ori eliram lior
  
    string name1 = ans.at(0);
    string name2 = ans.at(1);
    string name3 = ans.at(2);
    string name4 = ans.at(3);
    string name5 = ans.at(4); 
    string name6 = ans.at(5); 
    
    CHECK(name1 == "haya");
    CHECK(name2 == "kobi");
    CHECK(name3 == "liam");
    CHECK(name4 == "ori");
    CHECK(name5 == "eliram");
    CHECK(name6 == "lior");

}

TEST_CASE("Bad input - Improper matrix size") {
   OrgChart organization;
CHECK_THROWS(organization.add_sub("lior", "liam"));  
CHECK_THROWS(organization.add_sub("liam", "ori")); 
CHECK_THROWS(organization.add_sub("eliram", "lior"));  


}
