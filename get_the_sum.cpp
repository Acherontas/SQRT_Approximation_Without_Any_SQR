#include "get_the_sum.h"
#include <string.h>
#include <math.h>
#include <iostream>
using namespace std;
get_the_sum::get_the_sum()
{
    //ctor
}

get_the_sum::~get_the_sum()
{
    //dtor
}

get_the_sum::get_the_sum(const get_the_sum& other)
{
    //copy ctor
}

get_the_sum& get_the_sum::operator=(const get_the_sum& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}


long double get_the_sum::get_da_number(long double nmbi,int st,int prc){

     string jk;
     jk.clear();
     //jk+=to_string(nmbi);
     //cout<<"using " << jk << " with " << nmbi <<"\n";
     stringstream mjk;
     mjk<<std::setprecision(prc)<<nmbi;
     jk+=mjk.str();
     //cout<<"using get da number of " << jk <<"\n";
     char mk;
     int lk=0;
     long double smbi=0;
     int lgt=0;
     string ltg;
     ltg.clear();
     for(int i=0;i<=jk.size()-1;i++){
        mk=jk.at(i);
        if(st==2){
                 lgt+=1;
        }
        if(mk=='.'){
        //cout<<"exiting with " << smbi <<"\n";
            //if(st==2){
                         this->gt_leng=lgt;//-1
                //     }
          break;
        }
        if(st==1){
                    lk=stoi(&mk);
                    smbi+=lk;
                 }
        this->gt_leng=lgt;//-1
     }

    return smbi;
}
