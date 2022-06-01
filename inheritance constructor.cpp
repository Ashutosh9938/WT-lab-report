#include <iostream.h>
#include <conio.h>
#include<string.h>
class UNIVERSITY
{
   protected:
       char nameA[50] , char locationA[50];
    public:
       UNIVERSITY()
       {

       }
       UNIVERSITY(char *nameA,char *locationA)
       {
           strcpy(this -> nameA,nameA);
           strcpy(this -> locationA,locationA);
       }
       void displayA()
       {
           cout<<"university"<<nameA<<"location"<<locationA<<endl;
       }
};









class AFFILIATION:virtual public UNIVERSITY
{
   protected:
       char nameB[50] , char locationB[50];
       int sub;
    public:
       AFFILIATION()
       {

       }
       AFFILIATION(char *nameB,char *locationB,int sub,char *nameA,char *locationA):UNIVERSITY(char *nameA,char *locationA)
       {
           strcpy(this -> nameB,nameB);
           strcpy(this -> locationB,locationB);
           strcpy(this ->sub,sub)
       }
       void displayA()
       {
           cout<<" AFFILIATION"<<nameB<<"location"<<locationB<<"subject"<<sub<<endl;
       }
};






class CONSTITUENT:virtual public UNIVERSITY
{
   protected:
       char schooldean[50] , char nameofprograms[50];
    public:
       CONSTITUENT()
       {

       }
       CONSTITUENT(char *schooldean,char *nameofprograms,char *nameA,char *locationA):UNIVERSITY(char *nameA,char *locationA)
           strcpy(this -> schooldean,schooldean);
           strcpy(this -> nameofprograms,name of programs)
       }
       void displayA()
       {
           cout<<" CONSTITUENT"<<schooldean<<"name of programs"<<nameofprograms<<endl;
       }
};







class STUDENT: public AFFILIATION, public CONSTITUENT
{
   protected:
       char studentname[50] , char programofstudent[50];
       int enrollyear;
     public:
       STUDENT()
       {

       } 
        STUDENT(char *studentname,char *programofstudent,int enrollyear,char *schooldean,char *nameofprograms,char *nameA,char *locationA,char *nameB,char *locationB,int sub): CONSTITUENT(char *schooldean,char *nameofprograms),AFFILIATION(char *nameB,char *locationB,int sub)
        {
           strcpy(this -> studentname,studentname);
           strcpy(this -> programofstudent,programofstudent);
           strcpy(this -> enrollyearchar,enrollyear);
       } 
        void displayA()
       {
           cout<<" STUDENT "<<studentname<<"programofstudent"<<programofstudent<<"enrollyear"<<enrollyear<<endl;
       } 
};
int main()
{
    STUDENT Sobj("ashutosh","BESE","2020","idk","engineering","pokharauniversity","pokhara","NCIT","balkumari","physic");
    S.UNIVERSITY::displayA();
    s.AFFILIATION::displayA();
    s.CONSTITUENT::displayA();
    s.STUDENT::displayA();
    return 0;


}
