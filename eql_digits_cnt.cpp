#include "eql_digits_cnt.h"


eql_digits_cnt::eql_digits_cnt()
{
    //ctor
}

eql_digits_cnt::~eql_digits_cnt()
{
    //dtor
}

eql_digits_cnt::eql_digits_cnt(const eql_digits_cnt& other)
{
    //copy ctor
}

eql_digits_cnt& eql_digits_cnt::operator=(const eql_digits_cnt& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

int eql_digits_cnt::fcnt(long double mn,long double da_number,int prc,int logic,int log_lvl)
{
    char ck;
    int lk;
    stringstream mnp;
    mnp<<std::setprecision(prc)<<da_number;
    if(log_lvl==1){cout<<"will count the digit from " <<std::setprecision(prc)<< mnp.str() <<"\n";}
    string slk;
    slk.clear();
    slk+=mnp.str();
    if(log_lvl==1){cout<<"with string of it " << slk <<"\n";}
    int brk=0;
    this->f_cnt=0;
    for(int i=0;i<=slk.size()-1;i++){
      ck=slk.at(i);
      lk=stoi(&ck);
      if(logic==1){
        this->mn_ar[mnarcnt]=lk;
        this->mnarcnt+=1;
      }
      if(logic==0)
      {
       if(lk==this->mn_ar[i]){
             this->f_cnt+=1;
       }
       if(lk!=this->mn_ar[i]){
         brk+=1;
       }
      }
      if(brk==1){break;}
    }
    return 0;
}
