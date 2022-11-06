#include <iostream>

using namespace std;

class Disc{
    private:
        int Diameter;

    public:

        Disc(){

        }
        Disc(int D){
            Diameter = D;
        }

        int GiveD() const{
            return Diameter;
        }




};

class Hanoi{
    private:
        Disc Rod1[20];
        int Top1;
        Disc Rod2[20];
        int Top2;
        Disc Rod3[20];
        int Top3;

    public:

    Hanoi(int N){
        //This is the constructor.
        Top1 = -1;
        Top2 = -1;
        Top3 = -1;
        for(int i = 0;i<20;i++){
            Disc Empty(0);
            Rod1[i] = Empty;
            Rod2[i] = Empty;
            Rod3[i] = Empty;
            
            if(i<N){
                Disc D(N-i);
                Rod1[i] = D;
            }
        }

        Top1 = N-1;
        
    }

    Disc Display(){
        //This function returns given Disc.
        return Rod2[0];
    }

    void move(int from, int to){

        //This function does not work properly.
        //I cannot change the discs.
        Disc Empty(0);
        if(from<3 && from>-1){
            if(from == 0){
                if(to == 1){
                    *(Rod2+Top2+1) = *(Rod1+Top1);
                    Rod1[Top1] = Empty;
                    Top1 -=1;
                    Top2 +=1;
                    cout<<"Disc "<<(Rod2+Top2)->GiveD()<<" moved from "<<from<<" to "<<to<<" succesfully."<<endl;
                }
                else if(to == 2){
                    Rod3[Top3+1] = Rod1[Top1];
                    Rod1[Top1] = Empty;
                    Top1 -=1;
                    Top3 +=1;
                    cout<<"Disc "<<(Rod3+Top3)->GiveD()<<" moved from "<<from<<" to "<<to<<" succesfully."<<endl;
                }
                else{
                    cout<<"Invalid Rod Index"<<endl;
                }
            }
            else if(from == 1){
                if(to == 0){
                    Rod1[Top1+1] = Rod2[Top2];
                    Rod2[Top2] = Empty;
                    Top2 -=1;
                    Top1+=1;
                    cout<<"Disc "<<(Rod1+Top1)->GiveD()<<" moved from "<<from<<" to "<<to<<" succesfully."<<endl;
                }
                else if(to == 2){
                    Rod3[Top3+1] = Rod2[Top2];
                    Rod2[Top2] = Empty;
                    Top2 -=1;
                    Top3 +=1;
                    cout<<"Disc "<<(Rod3+Top3)->GiveD()<<" moved from "<<from<<" to "<<to<<" succesfully."<<endl;
                }
                else{
                    cout<<"Invalid Rod Index"<<endl;
                }
            }
            else if(from == 2){
                if(to == 0){
                    Rod1[Top1+1] = Rod3[Top3];
                    Rod3[Top3] = Empty;
                    Top3 -=1;
                    Top1+=1;
                    cout<<"Disc "<<(Rod1+Top1)->GiveD()<<" moved from "<<from<<" to "<<to<<" succesfully."<<endl;
                }
                else if(to == 1){
                    Rod2[Top2+1] = Rod3[Top3];
                    Rod3[Top3] = Empty;
                    Top3 -=1;
                    Top2 +=1;
                    cout<<"Disc "<<(Rod2+Top2)->GiveD()<<" moved from "<<from<<" to "<<to<<" succesfully."<<endl;
                }
                else{
                    cout<<"Invalid Rod Index"<<endl;
                }
            }
            else{
                cout<<"Move is Illegal"<<endl;
            }

        }
    }
};

void solve_hanoi(Hanoi& game){




    
};

