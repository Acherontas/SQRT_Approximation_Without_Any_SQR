#include <iostream>
#include <math.h>
#include <iomanip>
#include "get_the_sum.h"
#include "after_the_dot.h"
#include "part_of.h"
#include <vector>
#include <thread>
#include <bits/stdc++.h>
#include <limits>
#include <cfloat>
#include <cmath>
#include "eql_digits_cnt.h"
#include "bee_cls.h"
using namespace std;

    long double mynmb;
    long double rsto[100];int rt=0;long double afair;long double sqrti;
    long double cdis[1000];int cs=0;
    int preci;
    long double fractpart,intpart;
    long double epi_dio;
    long double dia_dio;
    long double section_temp;
    long double section_h;
    long double section_h_epi_dio;
    long double section_h_dia_dio;
    long double dia_dio_dio;
    long double dia_dio_four;
    vector<long double> xl;
    vector<long double> lx;
    vector<long double> xpl;
    vector<long double> fnl_weirdo;
    vector<string> lvec;
    vector<long double> v_cc;
    vector<long double> for_the_bee;
    string vecl;
    long double dif;
    long double xlip;
    int st_th;
    int v_log=-1;
    long double ckxlip;
    long double ckep,ckdd,ckddd,ckddf;
    long double cksh,ckshep,ckshdd;
    long double x_dv;
    int auto_v=0;
    int r_check_count=0;
    int bee_x_stp=0;
    long double bee_tmpf;
    int v_bee_log=-1;
    long double appro_auto;
    int xli=0;
    int sxli=0;

int check_sqrt(long double mani,long double ep,long double dd,long double st,long double sh,long double shep,long double shdd,long double ddd,long double ddf)
{
  if(isinf(mani) || isinf(ep) || isinf(dd) || isinf(st) || isinf(sh) || isinf(shep) || isinf(shdd) || isinf(ddd) || isinf(ddf))
  {
                cout<<"error continue with the rest \n";
  }

    if(!isinf(ep)){
         fractpart=modf(ep,&intpart);
         ckxlip=intpart*intpart;
        if(ckxlip<=mani){xl.push_back(ckxlip);lx.push_back(ep);}
            if(ckxlip>mani){
                while(ckxlip>mani){
                //std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
                ep=ep/10;
                fractpart=modf(ep,&intpart);
                ckxlip=intpart*intpart;
                if(ckxlip<=mani){xl.push_back(ckxlip);lx.push_back(ep);break;}
            }
        }
        if(v_log==1){cout<<"i insert "<<std::setprecision(preci)<<ckxlip <<" " << std::setprecision(preci)<<ep <<"\n";}
    }

    if(!isinf(dd)){
        fractpart=modf(dd,&intpart);
        ckep=intpart*intpart;
            if(ckep<=mani){xl.push_back(ckep);lx.push_back(dd);}
            if(ckep>mani){
                while(ckep>mani){
                   // std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
                    dd=dd/10;
                    fractpart=modf(dd,&intpart);
                    ckep=intpart*intpart;
                    if(ckep<=mani){xl.push_back(ckep);lx.push_back(dd);break;}
        }
    }
        if(v_log==1){cout<<"i insert "<<std::setprecision(preci)<<ckep <<" " << std::setprecision(preci)<<dd <<"\n";}
    }

    if(!isinf(st)){
        fractpart=modf(st,&intpart);
        ckdd=intpart*intpart;
            if(ckdd<=mani){xl.push_back(ckdd);lx.push_back(st);}
            if(ckdd>mani){
                while(ckdd>mani){
                   // std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
                    st=st/10;
                    fractpart=modf(st,&intpart);
                    ckdd=intpart*intpart;
                    if(ckdd<=mani){xl.push_back(ckdd);lx.push_back(st);break;}
                }
            }
        if(v_log==1){cout<<"i insert "<<std::setprecision(preci)<<ckdd <<" " << std::setprecision(preci)<<st <<"\n";}
    }

    if(!isinf(sh)){
        fractpart=modf(sh,&intpart);
        ckddd=intpart*intpart;
            if(ckddd<=mani){xl.push_back(ckddd);lx.push_back(sh);}
            if(ckddd>mani){
                while(ckddd>mani){
                  //  std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
                    sh=sh/10;
                    fractpart=modf(sh,&intpart);
                    ckddd=intpart*intpart;
                    if(ckddd<=mani){xl.push_back(ckddd);lx.push_back(sh);break;}
                }
            }
        if(v_log==1){cout<<"i insert "<<std::setprecision(preci)<<ckddd <<" " << std::setprecision(preci)<<sh <<"\n";}
    }


    if(!isinf(shep)){
            fractpart=modf(shep,&intpart);
            ckddf=intpart*intpart;
            if(ckddf<=mani){xl.push_back(ckddf);lx.push_back(shep);}
            if(ckddf>mani){
                while(ckddf>mani){
                    //std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
                    shep=shep/10;
                    fractpart=modf(shep,&intpart);
                    ckddf=intpart*intpart;
                    if(ckddf<=mani){xl.push_back(ckddf);lx.push_back(shep);break;}
                }
            }
        if(v_log==1){cout<<"i insert "<<std::setprecision(preci)<<ckddf <<" " << std::setprecision(preci)<<shep <<"\n";}
    }


    if(!isinf(shdd)){
        fractpart=modf(shdd,&intpart);
        cksh=intpart*intpart;
        if(cksh<=mani){xl.push_back(cksh);lx.push_back(shdd);}
        if(cksh>mani){
            while(cksh>mani){
                //std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
                shdd=shdd/10;
                fractpart=modf(shdd,&intpart);
                cksh=intpart*intpart;
                if(cksh<=mani){xl.push_back(cksh);lx.push_back(shdd);break;}
            }
        }
        if(v_log==1){cout<<"i insert "<<std::setprecision(preci)<<cksh <<" " << std::setprecision(preci)<<shdd <<"\n";}
    }


    if(!isinf(ddd)){
        fractpart=modf(ddd,&intpart);
        ckshep=intpart*intpart;
        if(ckshep<=mani){xl.push_back(ckshep);lx.push_back(ddd);}
        if(ckshep>mani){
            while(ckshep>mani){
               // std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
                ddd=dd/10;
                fractpart=modf(ddd,&intpart);
                ckshep=intpart*intpart;
                if(ckshep<=mani){xl.push_back(ckshep);lx.push_back(ddd);break;}
            }
        }
        if(v_log==1){cout<<"i insert "<<std::setprecision(preci)<<ckshep <<" " << std::setprecision(preci)<<ddd <<"\n";}
    }


    if(!isinf(ddf)){
        fractpart=modf(ddf,&intpart);
        ckshdd=intpart*intpart;
        if(ckshdd<=mani){xl.push_back(ckshdd);lx.push_back(ddf);}
        if(ckshdd>mani){
        while(ckshdd>mani){
                //std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
                ddf=ddf/10;
                fractpart=modf(ddf,&intpart);
                ckshdd=intpart*intpart;
                if(ckshdd<=mani){xl.push_back(ckshdd);lx.push_back(ddf);break;}
            }
        }
        if(v_log==1){cout<<"i insert "<<std::setprecision(preci)<<ckshdd <<" " << std::setprecision(preci)<<ddf <<"\n";}
    }
    return 0;
}

void show_xl(){
  if(v_log==1){cout<<"reporting size of xl vector " << xl.size()-1 <<" " << xl.capacity() <<"\n";}
  for(auto it=0;it<=xl.size()-1;it++)
  {
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    if(v_log==1){cout<<"entering amfidromi loop of xl vector  with first \n" ;}
    dif=mynmb-xl[it];
    if(v_log==1){
            x_dv=lx[it]*lx[it];
            cout<<  " of " <<std::setprecision(preci)<< lx[it] << " ^2 ::== " <<std::setprecision(preci)<< x_dv << " as intpart " <<std::setprecision(preci)<< xl[it] <<"  diafora " <<std::setprecision(preci) << dif << " from " << std::setprecision(preci) << mynmb <<"\n";
                }
    xpl.push_back(dif);
  }
}

void show_fnl_weirdo(){
    cout<<"\n";
    if(v_log==1){cout<<"the size of fnl_weirdo vector is " << fnl_weirdo.size()-1 <<" " << fnl_weirdo.capacity()<<"\n";}
    stable_sort(fnl_weirdo.begin(),fnl_weirdo.end());
    if(auto_v==1){appro_auto=fnl_weirdo[fnl_weirdo.size()-1];}
    for(auto i=fnl_weirdo.size()-1;i>0;i--){
      std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
      cout<<" " << fnl_weirdo[i] << " " ;
    }
   cout<<"\n";
}

void show_xpl(){
  int olp=0;
  if(v_log==1){
  cout<<"the size of xpl vector is " << xpl.size()-1 <<" "<< xpl.capacity() <<"\n";
  }
  stable_sort(xpl.begin(),xpl.end());
  long double mlp;
  for(auto i=0;i<=xpl.size()-1;i++){
     //cout<<xpl[i] <<" ";
     std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
     if(xpl[0]+xl[i]==mynmb){
                x_dv=lx[i]*lx[i];
                vecl.clear();
                if(v_log==1){cout<<  " of " <<std::setprecision(preci)<< lx[i] << " ^2 ::== " <<std::setprecision(preci)<< x_dv << " as intpart " <<std::                setprecision(preci)<< xl[i] <<"  diafora " <<std::setprecision(preci) << xpl[0] << " from " << std::setprecision(preci) <<                mynmb <<"\n";
                }
                //cout<<"da value " << std::setprecision(preci)<<lx[i] <<" ^2 " << xl[i] <<" diafora " << xpl[0] <<"\n";
                vecl+=" ";
                vecl+=to_string(lx[i]);
                vecl+=" ^2 ::== ";
                vecl+=to_string(x_dv);
                vecl+=" as intpart ";
                vecl+=to_string(xl[i]);
                vecl+=" diafora ";
                vecl+=to_string(xpl[0]);
                vecl+=" from ";
                vecl+=to_string(mynmb);
                vecl+=" ";
                lvec.push_back(vecl);
                fractpart=modf(lx[i],&intpart);
                fnl_weirdo.push_back(intpart);
                }
     olp+=1;
  }
 cout<<"\n";
}

int sqti(long double mnm,int one,int two){
    after_the_dot *aft=new after_the_dot();
    cout<<"-------------------------------------------------------------------------\n";
    rt=0;
    rsto[rt]=(long double)mnm/(long double)one;
    //da try
    fractpart=modf(rsto[rt],&intpart);
    epi_dio=intpart*2;
    dia_dio=intpart/2;
    section_temp=aft->gen_after_dot(rsto[rt]);
    section_h=(long double)intpart/(long double)section_temp;
    if(v_log==1){
                 cout<<"section_temp "<<std::setprecision(preci)<<section_temp<<"\n";
                 cout<<"section h " << std::setprecision(preci)<<section_h<<"\n";}
    section_h_epi_dio=section_h*2;
    section_h_dia_dio=(long double)section_h/(long double)2;
    dia_dio_dio=(long double)dia_dio/2;
    dia_dio_four=(long double)dia_dio/4;
    if(v_log==1){
    cout<<std::setprecision(preci) << mnm << " / " << std::setprecision(preci) << one << " ::== " << std::setprecision(preci) <<rsto[rt] << "\n";
                            cout<< "            ----->  | *2 " << std::setprecision(preci) << epi_dio << "\n";
                            cout<< "            ----->  /2 " << std::setprecision(preci) << dia_dio <<"\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_dio << "\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_four << "\n";
                            cout<< "            ----->  section " << std::setprecision(preci)<<section_h <<"\n";
                            cout<< "                 --> of section *2 " << std::setprecision(preci)<<section_h_epi_dio <<"\n";
                            cout<< "                 --> of section /2 " << std::setprecision(preci)<<section_h_dia_dio <<"\n";
                            cout<<"\n";
                            }
    check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four);
    rt+=1;
   if(v_log==1){ cout<<"CDIS Start \n";}
    for(int i=1;i<=cs;i++){
        std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
        rsto[rt]=(long double)rsto[rt-1]/(long double)cdis[i];
        //da try
        fractpart=modf(rsto[rt],&intpart);
        epi_dio=intpart*2;
        dia_dio=intpart/2;
        section_temp=aft->gen_after_dot(rsto[rt]);
        section_h=(long double)intpart/(long double)section_temp;
        if(v_log==1){
                 cout<<"section_temp "<<std::setprecision(preci)<<section_temp<<"\n";
                 cout<<"section h " << std::setprecision(preci)<<section_h<<"\n";}
        section_h_epi_dio=section_h*2;
        section_h_dia_dio=(long double)section_h/(long double)2;
        dia_dio_dio=(long double)dia_dio/2;
        dia_dio_four=(long double)dia_dio/4;
        if(v_log==1){
        cout<<std::setprecision(preci) << rsto[rt-1] << " / " << std::setprecision(preci) << cdis[i] << " ::== " << std::setprecision(preci) <<rsto[rt] << "\n";
                            cout<< "            ----->  | *2 " << std::setprecision(preci) << epi_dio << "\n";
                            cout<< "            ----->  /2 " << std::setprecision(preci) << dia_dio <<"\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_dio << "\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_four << "\n";
                            cout<< "            ----->  section " << std::setprecision(preci)<<section_h <<"\n";
                            cout<< "                 --> of section *2 " << std::setprecision(preci)<<section_h_epi_dio <<"\n";
                            cout<< "                 --> of section /2 " << std::setprecision(preci)<<section_h_dia_dio <<"\n";
                            cout<<"\n";}
        check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four);
        rt+=1;
        if(i>cs){break;}
    }
    if(v_log==1){cout<<"CDIS End \n";}
    rsto[rt]=(long double)mnm/(long double)two;
    //da try
    fractpart=modf(rsto[rt],&intpart);
    epi_dio=intpart*2;
    dia_dio=intpart/2;
    section_temp=aft->gen_after_dot(rsto[rt]);
    section_h=(long double)intpart/(long double)section_temp;
    if(v_log==1){
                 cout<<"section_temp "<<std::setprecision(preci)<<section_temp<<"\n";
                 cout<<"section h " << std::setprecision(preci)<<section_h<<"\n";}
    section_h_epi_dio=section_h*2;
    section_h_dia_dio=(long double)section_h/(long double)2;
    dia_dio_dio=(long double)dia_dio/2;
    dia_dio_four=(long double)dia_dio/4;
    if(v_log==1){
    cout<<std::setprecision(preci) << mnm << " / " << std::setprecision(preci) << two << " ::== " << std::setprecision(preci) <<rsto[rt] << "\n";
                            cout<< "            ----->  | *2 " << std::setprecision(preci) << epi_dio << "\n";
                            cout<< "            ----->  /2 " << std::setprecision(preci) << dia_dio <<"\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_dio << "\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_four << "\n";
                            cout<< "            ----->  section " << std::setprecision(preci)<<section_h <<"\n";
                            cout<< "                 --> of section *2 " << std::setprecision(preci)<<section_h_epi_dio <<"\n";
                            cout<< "                 --> of section /2 " << std::setprecision(preci)<<section_h_dia_dio <<"\n";
                            cout<<"\n";
                            }
    check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four);
    rt+=1;
    rsto[rt]=(long double)rsto[rt-1]/(long double)cdis[0];
    //da try
    fractpart=modf(rsto[rt],&intpart);
    epi_dio=intpart*2;
    dia_dio=intpart/2;
    section_temp=aft->gen_after_dot(rsto[rt]);
    section_h=(long double)intpart/(long double)section_temp;
    if(v_log==1){
                 cout<<"section_temp "<<std::setprecision(preci)<<section_temp<<"\n";
                 cout<<"section h " << std::setprecision(preci)<<section_h<<"\n";}
    section_h_epi_dio=section_h*2;
    section_h_dia_dio=(long double)section_h/(long double)2;
    dia_dio_dio=(long double)dia_dio/2;
    dia_dio_four=(long double)dia_dio/4;
    if(v_log==1){
    cout<<std::setprecision(preci) << rsto[rt-1] << " / " << std::setprecision(preci) << cdis[0] << " ::== " << std::setprecision(preci) <<rsto[rt] << "\n";
                            cout<< "            ----->  | *2 " << std::setprecision(preci) << epi_dio << "\n";
                            cout<< "            ----->  /2 " << std::setprecision(preci) << dia_dio <<"\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_dio << "\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_four << "\n";
                            cout<< "            ----->  section " << std::setprecision(preci)<<section_h <<"\n";
                            cout<< "                 --> of section *2 " << std::setprecision(preci)<<section_h_epi_dio <<"\n";
                            cout<< "                 --> of section /2 " << std::setprecision(preci)<<section_h_dia_dio <<"\n";
                            cout<<"\n";
                            }
    check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four);
    //for(int i=0;i<=rt-1;i++){
    //  cout<< " @i "<< i << " " << std::setprecision(preci)<<rsto[i] <<"\n";
    //}
    //cout<<"\n";
    if(v_log==1){cout<<"removals \n";cout<<"reporing rt " << rt <<"\n";}
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    for(int i=0;i<=rt-1;i++){
        std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
        if(rsto[i]>rsto[rt]){
                            afair=rsto[i]-rsto[rt];
                            //da try
                            fractpart=modf(afair,&intpart);
                            epi_dio=intpart*2;
                            dia_dio=intpart/2;
                            section_temp=aft->gen_after_dot(afair);
                            section_h=(long double)intpart/(long double)section_temp;
                            if(v_log==1){
                                        cout<<"section_temp "<<std::setprecision(preci)<<section_temp<<"\n";
                                        cout<<"section h " << std::setprecision(preci)<<section_h<<"\n";}
                            section_h_epi_dio=section_h*2;
                            section_h_dia_dio=(long double)section_h/(long double)2;
                            dia_dio_dio=(long double)dia_dio/2;
                            dia_dio_four=(long double)dia_dio/4;
                            if(v_log==1){
                            cout<<std::setprecision(preci) << rsto[i] << " - " << std::setprecision(preci) << rsto[rt] << " ::== " << std::setprecision(preci) <<afair << "\n";
                            cout<< "            ----->  | *2 " << std::setprecision(preci) << epi_dio << "\n";
                            cout<< "            ----->  /2 " << std::setprecision(preci) << dia_dio <<"\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_dio << "\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_four << "\n";
                            cout<< "            ----->  section " << std::setprecision(preci)<<section_h <<"\n";
                            cout<< "                 --> of section *2 " << std::setprecision(preci)<<section_h_epi_dio <<"\n";
                            cout<< "                 --> of section /2 " << std::setprecision(preci)<<section_h_dia_dio <<"\n";
                            cout<<"\n";
                            }
       check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four);
        }
        if(rsto[i]<rsto[rt]){
                            afair=rsto[rt]-rsto[i];
                            //da try
                            fractpart=modf(afair,&intpart);
                            epi_dio=intpart*2;
                            dia_dio=intpart/2;
                            section_temp=aft->gen_after_dot(afair);
                            section_h=(long double)intpart/(long double)section_temp;
                            if(v_log==1){
                                        cout<<"section_temp "<<std::setprecision(preci)<<section_temp<<"\n";
                                        cout<<"section h " << std::setprecision(preci)<<section_h<<"\n";}
                            section_h_epi_dio=section_h*2;
                            section_h_dia_dio=(long double)section_h/(long double)2;
                            dia_dio_dio=(long double)dia_dio/2;
                            dia_dio_four=(long double)dia_dio/4;
                            if(v_log==1){
                            cout<<std::setprecision(preci) << rsto[rt] << " - " << std::setprecision(preci) << rsto[i] << " ::== " << std::setprecision(preci) <<afair << "\n";
                            cout<< "            ----->  | *2 " << std::setprecision(preci) << epi_dio << "\n";
                            cout<< "            ----->  /2 " << std::setprecision(preci) << dia_dio <<"\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_dio << "\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_four << "\n";
                            cout<< "            ----->  section " << std::setprecision(preci)<<section_h <<"\n";
                            cout<< "                 --> of section *2 " << std::setprecision(preci)<<section_h_epi_dio <<"\n";
                            cout<< "                 --> of section /2 " << std::setprecision(preci)<<section_h_dia_dio <<"\n";
                            cout<<"\n";
                            }
    check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four);
        }
    }
    if(v_log==1){cout<<"ending sqti reporting the results \n";}
    show_xl();
    show_xpl();
    xl.clear();
    lx.clear();
    xpl.clear();
    cout<<"-------------------------------------------------------------------------\n";
   return 0;
}

eql_digits_cnt *eqdg=new eql_digits_cnt();
void show_vcc(long double entered){
  long double xlk;
  long double afr;
  stable_sort(v_cc.begin(),v_cc.end());
  cout<<"u enter as approximation " <<std::setprecision(preci)<< entered <<" with main number to find the power " <<std::setprecision(preci)<< mynmb <<" with psifia " << eqdg->mnarcnt <<"\n";
  for_the_bee.push_back(entered);
  xlk=entered*entered;
  cout<<"as of the entered \n";
  if(mynmb>xlk){afr=mynmb-xlk;}
  if(mynmb<xlk){afr=xlk-mynmb;}
  if(v_log==0){eqdg->fcnt(0,xlk,preci,0,0);}
  if(v_log==1){eqdg->fcnt(0,xlk,preci,0,1);}
  cout<< entered << " ^2 ::== " <<std::setprecision(preci)<< xlk <<" ";
  cout<<"              me idia psifia " <<std::setprecision(preci)<< eqdg->f_cnt << " ";
  cout<<"              me diafora "<<std::setprecision(preci)<< afr <<"\n";
  long double tmp_min;
  tmp_min=afr;
  long double tmp_vl;
  long double tmp_xlk;
  int tmp_eq;
  tmp_vl=entered;
  tmp_eq=eqdg->f_cnt;
  int ent=0;
  int psifia_for_auto=0;
  long double pwrd;
  for(auto ito=0;ito<=v_cc.size()-1;ito+=1)
  {
     cout<<"\n";
     std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
     xlk=v_cc[ito]*v_cc[ito];
     if(v_log==0){eqdg->fcnt(0,xlk,preci,0,0);}
     if(v_log==1){eqdg->fcnt(0,xlk,preci,0,1);}
     if(psifia_for_auto>0){
                            if ((eqdg->f_cnt)>psifia_for_auto) {
                                 psifia_for_auto=eqdg->f_cnt;
                                 pwrd=v_cc[ito];
                            }
                          }
     if(psifia_for_auto==0){
                                psifia_for_auto=eqdg->f_cnt;
                                pwrd=v_cc[ito];
                           }
     if(mynmb>xlk){afr=mynmb-xlk;}
     if(mynmb<xlk){afr=xlk-mynmb;}
     cout<<v_cc[ito]<<" ^2 ::== " <<std::setprecision(preci)<< xlk <<" ";
     cout<<"           me idia psifia " <<std::setprecision(preci)<< eqdg->f_cnt << " ";
     cout<<"           me diafora "<<std::setprecision(preci)<< afr <<"\n";
     if(afr<tmp_min && afr>=0){tmp_min=afr;tmp_vl=v_cc[ito];tmp_xlk=xlk;tmp_eq=eqdg->f_cnt;}
  }
  xlk=tmp_vl*tmp_vl;
  cout<<"\n";
  cout<<"\n";
  cout<<"-------------------------Approximation Result Set-----------------------------------------------------\n";
  if(mynmb<=xlk){
  cout<<"\n";
  cout<<"possible approximation < ::== " <<std::setprecision(preci)<< tmp_vl << " ^2 " <<std::setprecision(preci)<< xlk << " ";
  cout<<"              me idia psifia " <<std::setprecision(preci)<< tmp_eq << " ";
  cout<<"              me diafora "<<std::setprecision(preci)<< tmp_min <<"\n";
  for_the_bee.push_back(tmp_vl);
  cout<<"\n";
  }
  if(xlk>=mynmb){
  cout<<"\n";
  cout<<"possible approximation > ::== " <<std::setprecision(preci)<< tmp_vl << " ^2 " <<std::setprecision(preci)<< xlk << " ";
  cout<<"              me idia psifia " <<std::setprecision(preci)<< tmp_eq << " ";
  cout<<"              me diafora "<<std::setprecision(preci)<< tmp_min <<"\n";
  for_the_bee.push_back(tmp_vl);
  cout<<"\n";
  }
  if(mynmb>=xlk){
  cout<<"\n";
  cout<<"possible approximation > ::== " <<std::setprecision(preci)<< tmp_vl << " ^2 " << std::setprecision(preci)<<xlk << " ";
  cout<<"            me idia psifia " <<std::setprecision(preci)<< tmp_eq << " ";
  cout<<"            me diafora "<<std::setprecision(preci)<< tmp_min <<"\n";
  for_the_bee.push_back(tmp_vl);
  cout<<"\n";
  }
  //bee_tmpf=tmp_vl;
  xli=0;
  while(xlk<=mynmb){
     cout<<"\n";
     std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
     tmp_vl=tmp_vl+1;
     xlk=tmp_vl*tmp_vl;
     if(v_log==0){eqdg->fcnt(0,xlk,preci,0,0);}
     if(v_log==1){eqdg->fcnt(0,xlk,preci,0,1);}
     if(mynmb>xlk){afr=mynmb-xlk;}
     if(mynmb<xlk){afr=xlk-mynmb;}
     if(mynmb==xlk){afr=0;}
     cout<<"possible approximation of addition ::== " << std::setprecision(preci)<<tmp_vl <<" with ^2  " << std::setprecision(preci)<<xlk <<" ";
     cout<<"            me idia psifia " <<std::setprecision(preci)<< eqdg->f_cnt << " ";
     cout<<"            me diafora " <<std::setprecision(preci)<< afr <<"\n";
     for_the_bee.push_back(tmp_vl);
     if(xlk>mynmb){ent+=1; bee_tmpf=tmp_vl;
        cout<<"will pass value of "<< bee_tmpf <<"\n"; break;}
     if(xlk==mynmb){ent+=1; bee_tmpf=tmp_vl;
        cout<<"will pass value of "<< bee_tmpf <<"\n"; break;}
     xli+=1;
     if(xli==sxli){break;}
  }
  xli=0;
  if(ent==0){
  cout<<"----removing using main number " <<std::setprecision(preci)<< mynmb <<"\n";
  while(xlk>mynmb){
     cout<<"\n";
     std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
     tmp_vl=tmp_vl-1;
     xlk=tmp_vl*tmp_vl;
     if(v_log==0){eqdg->fcnt(0,xlk,preci,0,0);}
     if(v_log==1){eqdg->fcnt(0,xlk,preci,0,1);}
     if(xlk<mynmb){afr=mynmb-xlk;}
     if(xlk>mynmb){afr=xlk-mynmb;}
     if(mynmb==xlk){afr=0;}
     if(isinf(afr)){afr=0;}
     for_the_bee.push_back(tmp_vl);
     cout<<"possible approximation of minus ::== " <<std::setprecision(preci)<< tmp_vl <<" with ^2  " <<std::setprecision(preci)<< xlk <<" ";
     cout<<"            me idia psifia " <<std::setprecision(preci)<< eqdg->f_cnt << " ";
     cout<<"            me diafora " <<std::setprecision(preci)<< afr <<"\n" ;
     if(xlk<=mynmb){
        bee_tmpf=tmp_vl;
        cout<<"will pass value of "<< bee_tmpf <<"\n";
        break;
        }
        xli+=1;
        if(xli==sxli){break;}
  }
  }
  cout<<"\n";
}

int main(int argc,char** argv)
{
    cout<<"voyeristic behaviours and others have fun \n";
    cout<<"ur number ,ur precision , ur sleep time , ur log ,ur automation 0 no 1 auto , ur bee auto 0 for no log 1 for log \n";
    cout<<"the approximation while loops times to run if -1 infinite loop will occur until other equations gets equal \n";
    mynmb=stold(argv[1]);
    preci=stoi(argv[2]);
    st_th=stoi(argv[3]);
    v_log=stoi(argv[4]);
    auto_v=stoi(argv[5]);
    v_bee_log=stoi(argv[6]);
    sxli=stoi(argv[7]);
    cout<<"with main number "<<std::setprecision(preci) << mynmb <<"\n";
    if(v_log==0){eqdg->fcnt(0,mynmb,preci,1,0);}
    if(v_log==1){eqdg->fcnt(0,mynmb,preci,1,1);}
    cout<<eqdg->mnarcnt<<"\n";
    int ar_one[4]={9,25,34,16};
    int ar_two[4]={9,26,35,17};
    int ar_three[4]={10,25,35,15};
    int ar_four[4]={10,26,36,16};
    cout<<" @ CDIS : with main number "<<std::setprecision(preci) << mynmb <<"\n";
    get_the_sum *gti=new get_the_sum();
    cdis[cs]=gti->get_da_number(mynmb,1,preci);
    cout<<"Main cdi " << cdis[cs] <<"\n";
    if(cdis[cs]>9){
       while(cdis[cs]>9){
            cs+=1;
            cdis[cs]=gti->get_da_number(cdis[cs-1],1,preci);
            cout<<"Secondary cdi " << cdis[cs] <<"\n";
            if(cdis[cs]<=9){
                cout<<"Exiting Secondary cdi " << cdis[cs] <<"\n";
                break;
            }
       }
    }
    sqrti=sqrt(mynmb);
    cout<<"with sqrt of math " <<std::setprecision(preci)<< sqrti <<"\n";
    cout<<"\n";
    cout<<"9 25 |34 16| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqti(mynmb,34,16);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    rt=0;
    cout<<"9 |25| 34 |16| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqti(mynmb,25,16);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    rt=0;
    cout<<"9 26 |35 17| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqti(mynmb,35,17);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    rt=0;
    cout<<"9 |26| 35 |17| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqti(mynmb,26,17);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    rt=0;
    cout<<"10 25 |35 15| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqti(mynmb,35,15);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    rt=0;
    cout<<"10 |25| 35 |15| " <<std::setprecision(preci)<< sqrti <<"  and main " << std::setprecision(preci)<<mynmb <<"\n";
    sqti(mynmb,25,15);
    cout<<"\n";
    rt=0;
    cout<<"10 26 |36 16| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqti(mynmb,36,16);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    rt=0;
    cout<<"10 |26| 36 |16| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqti(mynmb,26,16);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    rt=0;
    cout<<"\n";
    if(v_log==1){
        for(int m=0;m<=lvec.size()-1;m++){
                cout<<std::setprecision(preci)<<lvec[m] <<"\n";
        }
    }
    cout<<"\n";
    cout<<"---------order of near approximation numbers--------\n";
    cout<<"|----------bigger value is the nearest-------------|\n";
    show_fnl_weirdo();
    cout<<"----------------------------------------------------\n";
    long double lt_main;
    long double lt;
    cout<<"\n";
    if(auto_v==1){lt_main=appro_auto;
                  cout<<"auto value is "<<lt_main <<"\n";
                  std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
                 }
    if(auto_v==0){cout<<"enter a number from above \n";
                  cin>>lt_main;}
    cout<<"lenght of " <<std::setprecision(preci)<< lt_main <<" " ;
    lt=gti->get_da_number(lt_main,2,preci);
    int k=gti->gt_leng;
    cout<<std::setprecision(preci)<< k <<"\n";
    lt=gti->get_da_number(mynmb,2,preci);
    int l=gti->gt_leng;
    cout<<"lenght of " <<std::setprecision(preci) << mynmb <<  " is " << std::setprecision(preci) << l <<"\n";
    part_of *prt=new part_of();
    long double abqr;
    int psif=1;
    int ps_ask;
    if(auto_v==0){cout<<"default 4 loops enter 4 or more [4 is 3] \n";
                  cout<<"suggested value : " << k+1 <<"\n";
                  cin>>ps_ask;
                 }
    if(auto_v==1){ps_ask=k+1;
                  cout<<"moving with ps_ask " << ps_ask <<"\n";
                  std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
                 }
    part_of *ptr=new part_of();
    long double baqr;
    for(;;){
        std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
        cout<<"-------------------------------------------------------\n";
        cout<<"times " << psif <<" ";
        prt->get_the_part(lt_main,psif-1,preci);
        abqr=prt->qrt;
        ptr->get_the_part(mynmb,psif-1,preci);
        baqr=ptr->qrt;
        cout<<std::setprecision(preci)<<ptr->rtv << " " <<std::setprecision(preci)<< prt->rtv <<"\n";
        cout<<"main " <<std::setprecision(preci)<< baqr << " second " <<std::setprecision(preci)<< abqr <<"\n";
        long double ab,ba;
        ab=baqr*baqr;
        ba=abqr*abqr;
        cout<<"main " <<std::setprecision(preci)<< ab << " second " <<std::setprecision(preci)<< ba <<"\n";
        long double ldb;
        ldb=(long double)baqr/(long double)ba;
        int by_one;
        cout<<"times of " <<std::setprecision(preci)<< ldb <<"\n";
        cout<<"new times of " <<std::setprecision(preci)<< ldb <<"\n";
        long double adb;
        adb=lt_main*ldb;
        cout<<"using " << std::setprecision(preci)<<lt_main << " * " << std::setprecision(preci)<<ldb <<"\n";
        cout<<std::setprecision(preci)<<adb<<" ";
        ptr->get_the_part(adb,-1,preci);
        int ad=ptr->all_length;
        int pd=ptr->dot_pos;
        int lap=(ad-1)-pd;
        cout<<" with length of " << ad-1 <<" and dot length "<< pd <<" will move " << lap <<"\n" ;
        if(lap>10){cout<<"lap for tens is more than ten will lower it \n";lap=lap=10;}
        long double t_ten=10;
        long double t_rst;
        cout<<"\n";
        long double rst_f;
        long double frc,intprt;
        rst_f=adb*adb;
        int xstp=0;
        fractpart=modf(mynmb,&intpart);
        cout<<" trying to reach the main number " << std::setprecision(preci)<<mynmb <<" ";
        ptr->get_the_part(intpart,-1,preci);
        int mad=ptr->all_length; //main doesnt have a dot
        int mpd=ptr->dot_pos;
        int mlap=(ad-1)-pd;
        cout<<" main number intpart lenght " << mad << " \n"; // dot length " << mpd << " after dot " << mlap <<"\n";
        cout<<" fract " <<std::setprecision(preci)<<fractpart << " int " << std::setprecision(preci)<<intpart<<"\n";
        cout<<"    -----------------> " << std::setprecision(preci)<<adb<<" ^2 ::== " <<std::setprecision(preci)<< rst_f <<"\n";
        frc=modf(rst_f,&intprt);
        cout<<" temp fract "<< std::setprecision(preci)<< frc << " temp int " << std::setprecision(preci)<<intprt<<"\n";
        if(rst_f==mynmb)
        {
          cout<<"power of 2 for "<< std::setprecision(preci)<<mynmb << " is " << std::setprecision(preci)<<rst_f <<"\n";
          xstp=1;
        }
        if(intpart==intprt)
        {
          cout<<"closest power of 2 for "<< std::setprecision(preci)<<mynmb << " is " << std::setprecision(preci)<<rst_f <<"\n";
          xstp=2;
        }
        cout<<"before loop xstp is " << xstp <<"entering tens with lap of value " << lap <<"\n";
        int lshow=0;int xbrk=0;int rts=0;
        if(xstp==0){
            for(;;){ //int i=0;i<=lap;i++
                std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
                lshow=0;
                t_rst=adb*t_ten;
                rst_f=t_rst*t_rst;
                if(v_log==1){cout<<"using t_rst as "<<t_rst <<"\n";}
                if(v_log==1){cout<<"using for fract " << rst_f <<"\n";}
                frc=modfl(rst_f,&intprt);
                if(rts!=3){
                    cout<<"getting the part of " << rst_f <<" :: ";
                    ptr->get_the_part(intprt,-1,preci);
                    ad=ptr->all_length; //the lenght of intpart of current floatted possibly number
                    pd=ptr->dot_pos;
                    cout<<"ad " << ad << " and mad " << mad <<"\n";
                    rts=ad-mad;
                }
                if(ad>mad){cout<<"have to exit bigger lenght with ad "<< ad <<" and mad "<< mad <<"\n";xbrk=1;}
                if(ad==mad || ad-mad==1 ||  mad-ad==1 || mad==ad)
                //ad-mad==2 || ad-mad==3 || || mad-ad==2 || mad-ad==3
                {
                   cout<<"i push_back a near value of ";
                   frc=modfl(t_rst,&intprt);
                   v_cc.push_back(intprt);
                   cout<<std::setprecision(preci)<<intprt <<"\n";
                   cout<<"stopping with ad " << ad << " and mad of "<< mad <<"\n";
                   lshow=0;
                   xbrk=1;
                }
                else{
                   lshow=1;
                }
                if(v_log==1 || v_log==2){
                cout<<"    -----------------> " << std::setprecision(preci)<<t_rst<<" ^2 ::== " << std::setprecision(preci)<<rst_f<<"\n";
                }
                if(rst_f==mynmb)
                {
                    cout<<"power of 2 for "<< std::setprecision(preci)<<mynmb << " is " << std::setprecision(preci)<<rst_f <<"\n";
                    cout<<"temp fract "<< std::setprecision(preci)<< frc << " temp int " << std::setprecision(preci)<<intprt<<"\n";
                    xstp=1;
                }
                if(intpart==intprt)
                {
                    cout<<"closest power of 2 for "<< std::setprecision(preci)<<mynmb << " is " << std::setprecision(preci)<<rst_f <<"\n";
                    xstp=2;
                }
                t_ten=t_ten*10;
                if(v_log==1){cout<<"t_ten increased \n";}
                if(xstp!=0){
                            cout<<"breaking with xstp of value " << xstp <<"\n";
                            break;
                           }
                if(xbrk==1){
                            cout<<"breaking with xbrk of value "<< xbrk <<"\n";
                            break;
                            }
            }
        }
        cout<<"\n";
        psif+=1;
        if(v_log==1){cout<<"increasing the digits " << psif <<"\n";}
        std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
        if(psif==ps_ask){break;}
        cout<<"-------------------------------------------------------\n";
    }
    cout<<"\n";
    cout<<"\n";
    show_vcc(lt_main);
    bee_cls *bee = new bee_cls();
    cout<<"\n";
    cout<<"\n";
    cout<<"------------------------Bee-----------------------------\n";
    for(;;){
        std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
        if(auto_v==0){
            cout<<"enter one of the approximated number from above \n";
            cin>>bee_tmpf;
            cout<<"enter log level 0 or 1\n";
            cin>>v_bee_log;
            cout<<"entering with "<< std::setprecision(preci)<<bee_tmpf <<" and log of bee " << v_bee_log <<"\n";
            bee->bee_man(mynmb,bee_tmpf,preci,v_bee_log);
            bee->bee_show(preci);
            cout<<"enter 1 to exit \n";
            cin>>bee_x_stp;
        }
        if(auto_v==1){
            bee_x_stp=1;
           for(auto it=0;it<=for_the_bee.size()-1;it++){
                std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
                cout<<"\n";
                cout<<"-------------------Calculation Bee--------------------------------\n";
                bee->bee_man(mynmb,for_the_bee[it],preci,v_bee_log);
                bee->bee_show(preci);
                bee->~bee_cls();
                if(bee_x_stp!=1){cout<<"-------------------------------------------------\n";}
                //if(bee->rtr==1){break;}
           }
        }
        if(bee_x_stp==1){break;}
        if(bee_x_stp!=1){
           cout<<"-------------------------------------------------\n";
        }
    }
    return 0;
}
