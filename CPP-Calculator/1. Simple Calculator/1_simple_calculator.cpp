# include <bits/stdc++.h>
using namespace std;

class calculator{
   public:
      
      double getNumber(string s){
        double num; 
        cout<<s;
        cin>>num;
        return num;
      }

      string getstring(string s){
         string func;
         cout<<s;
         cin>>func;
         return func;
      }

      pair<double,double>getnumbers(){
        int a = getNumber("Give First Number :");
        int b = getNumber("Give Second Number :");
        
        return {a,b};
      }

      pair<string,double>gettrigoinputs(){   
        string a = getstring("Give Trigonometric Function :");
        int b = getNumber("Give Angle(Degrees) :");
        return {a,b};
      }

      pair<double,double>getpowerinputs(){
        double a = getNumber("Give Base: ");
        double b = getNumber("Give Exponents: ");
        
        return {a,b};
      }

      double add(double a , double b){
         return a+b;
      }

      double subtract(double a , double b){
        return a-b;
      }

      double multiply(double a , double b){
        return a*b;
     }

     double divide(double a , double b){
        if(b == 0)
        throw runtime_error("Division by Zero is Not Possible");

        return a/b;
     }
     
     int modulus(int a , int b){
        if(b == 0)
        throw runtime_error("Modulud by zero is not possible");

        return a%b;
     }

     double logarithm(double a){
        if(a <= 0)
        throw runtime_error("Log of Non positive numbers is not possible");

        return log(a);
     }
     
     double power(double a , double b){
        return pow(a,b);
     }
     
     double squareroot(double a){
        return sqrt(a);
     }
     double trigo(string a , double b){
        double c = (((3.141592653589793)/180)*b);
        if(a == "sin")
        return sin(c);

        else if(a == "cos")
        return cos(c);

        else if(a == "tan"){
           if(b == 90)
           throw runtime_error("tan(90) is Not Defined");
        
           return tan(c);
        }

        else if(a == "cosec"){
           if(b == 0)
           throw runtime_error("cosec(0) is Not Defined");

           return 1/(sin(c));
        }
        else if(a == "sec"){
           
            if(b == 90)
            throw runtime_error("sec(90) is Not Defined");

            return 1/(cos(c));
        }
        else if(a == "cot"){
           if(b == 0)
           throw runtime_error("cot(0) is Not Defined");
           
           return 1/(tan(c));
        }
        else
        throw runtime_error("No Such Trigonometric Function");
        
     }
      

};

int main(){
   
    cout<<"Hello User ,Welcome to the Calculator";
    cout<<"Options :"<<endl<<"1.  Addition"<<endl<<"2.  Subtraction"<<endl<<"3.  Multiplication"<<endl<<"4.  Division"<<endl<<"5.  Modulus "<<endl<<"6.  Logarithm"<<endl<<"7.  Power"<<endl<<"8.  Square Root"<<endl<<"9.  Trigonometric Calculation"<<endl<<"10. Exit"<<endl;
    calculator ob;

    while(true){ 
       
       int op;
       cout<<"choose an Option : ";
       cin>>op;
       
       if(op == 10)
       break;

       try{
          if(op == 1){
             pair<double,double>p1;
             p1 = ob.getnumbers();
             double z = ob.add(p1.first,p1.second);
             cout<<"Output :"<<z<<endl;
          }  
        
          else if(op == 2){
            pair<double,double>p1;
            p1 = ob.getnumbers();
            double z = ob.subtract(p1.first,p1.second);
            cout<<"Output :"<<z<<endl;
         } 
 
         else if(op == 3){
            pair<double,double>p1;
            p1 = ob.getnumbers();
            double z = ob.multiply(p1.first,p1.second);
            cout<<"Output :"<<z<<endl;
        } 
 
        else if(op == 4){
            pair<double,double>p1;
            p1 = ob.getnumbers();
            double z = ob.divide(p1.first,p1.second);
            cout<<"Output :"<<z<<endl;
        } 
        
        else if(op == 5){
            pair<double,double>p1;
            p1 = ob.getnumbers();
            int z = ob.modulus(p1.first,p1.second);
            cout<<"Output :"<<z<<endl;
        }

        else if(op == 6){   
           double x = ob.getNumber("Enter Number :");
           double z =  ob.logarithm(x);
           cout<<"Output :"<<z<<endl;
        }
        
        else if(op == 7){
            pair<double,double>p1; 
            p1 = ob.getpowerinputs();
            double z = ob.power(p1.first,p1.second);
            cout<<"Output :"<<z<<endl; 
        }

        else if(op == 8){
            double x = ob.getNumber("Enter Base :");
            double z = ob.squareroot(x);
            cout<<"Output :"<<z<<endl; 
        }

        else if(op == 9){
          pair<string,double>p1;
          p1 = ob.gettrigoinputs();
          double z = ob.trigo(p1.first,p1.second);
          cout<<"Output :"<<z<<endl;
        }
        
        else
        cout<<"No Such Option"<<endl;
      }

      catch(runtime_error &e){
        cout<<e.what()<<endl;
      }

    }
    cout<<"Thank you for using the Calculator"<<endl;

    return 0;
}