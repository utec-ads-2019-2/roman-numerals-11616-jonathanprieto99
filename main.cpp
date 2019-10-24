#include <iostream>
#include <string>
#include <vector>
using namespace std;

string input;

const string romanos[13]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
const int arabicos[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
vector<string> respuesta;

int respuestaarabica;

    bool checktype(string input)
    {
        return (atoi(input.c_str()));
    }

    void build_list(string input){
        for(int n=1; n<4000; n++){
            int temp=n;
            string romano;
            for (int i = 12; i > 0 and temp ; --i) {
                while(temp>=arabicos[i]){
                    romano = romanos[i]+romano;
                    temp = temp-arabicos[i];
                    //cout<<temp<<endl;
                    //cout<<romano<<endl;
                }
            }
            if(checktype(input)){
                respuesta.push_back(romano);
            }
            else{
                respuestaarabica=temp;
                cout<<respuestaarabica<<endl;
            }
        }

        if(checktype(input)){
            cout<<respuesta[5]<<endl;
            //for (int i = 0; i < respuesta.size() ; ++i) {
                //cout<<respuesta[i];
            }
        else{
            cout<<respuestaarabica<<endl;
        }

    }

int main(){
        while(cin>>input){
            build_list(input);
        }

    return 0;
}



