#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    ofstream ofs("do");
    srand(time(0));
    for(size_t i = 1; i <= 9; ++i){
        ofs << "cirread ../tests.fraig/strash0" << i << ".aag -replace" << endl;
        ofs << "cirprint -summary" << endl;
        ofs << "cirprint -net"     << endl;
        ofs << "cirprint -po"      << endl;
        ofs << "cirprint -pi"      << endl;
        ofs << "cirprint -flo"     << endl;
        ofs << "cirwrite"          << endl; 
        for(size_t i = 0; i <= 15; ++i){
            ofs << "cirgate " << i << endl;
            for(size_t j = 0; j <= 5; j++){
                ofs << "cirgate " << i << " -fanin " << j << endl;
                ofs << "cirgate " << i << " -fanout " << j << endl;
            } 
        }
    }
    for(size_t i = 0; i <= 6; ++i){
        ofs << "cirread ../tests.fraig/strash0" << i << ".aag -replace" << endl;
        ofs << "cirprint -summary" << endl;
        ofs << "cirprint -net"     << endl;
        ofs << "cirprint -po"      << endl;
        ofs << "cirprint -pi"      << endl;
        ofs << "cirprint -flo"     << endl;
        ofs << "cirwrite"          << endl; 
        for(size_t i = 0; i <= 15; ++i){
            ofs << "cirgate " << i << endl;
            for(size_t j = 0; j <= 5; j++){
                ofs << "cirgate " << i << " -fanin " << j << endl;
                ofs << "cirgate " << i << " -fanout " << j << endl;
            } 
        }
    }
    /*for(size_t i = 1; i <= 9; ++i){
        ofs << "cirread ../tests.fraig/sim0" << i << ".aag -replace" << endl;
        ofs << "cirprint -summary" << endl;
        ofs << "cirprint -net"     << endl;
        ofs << "cirprint -po"      << endl;
        ofs << "cirprint -pi"      << endl;
        ofs << "cirprint -flo"     << endl;
        ofs << "cirwrite"          << endl;
        if(i == 6) { 
            for(size_t i = 0; i <= 3000; ++i){
                unsigned idx = rand()%6451;
                unsigned depth = rand()%700;
                ofs << "cirgate " << idx << endl;
                ofs << "cirgate " << idx << " -fanin " << depth << endl;
                ofs << "cirgate " << idx << " -fanout " << depth << endl;
            }
        }
        else if(i == 7) { 
            for(size_t i = 0; i <= 4000; ++i){
                unsigned idx = rand()%9637;
                unsigned depth = rand()%1000;
                ofs << "cirgate " << idx << endl;
                ofs << "cirgate " << idx << " -fanin " << depth << endl;
                ofs << "cirgate " << idx << " -fanout " << depth << endl;
            }
        }
        else if(i == 9) { 
            for(size_t i = 0; i <= 1500; ++i){
                unsigned idx = rand()%3588;
                unsigned depth = rand()%500;
                ofs << "cirgate " << idx << endl;
                ofs << "cirgate " << idx << " -fanin " << depth << endl;
                ofs << "cirgate " << idx << " -fanout " << depth << endl;
            }
        }
        else{
            for(size_t i = 0; i <= 15; ++i){
                ofs << "cirgate " << i << endl;
                for(size_t j = 0; j <= 5; j++){
                    ofs << "cirgate " << i << " -fanin " << j << endl;
                    ofs << "cirgate " << i << " -fanout " << j << endl;
                } 
            }
        }
    }*/
    /*for(size_t i = 0; i <= 5; ++i){
        ofs << "cirread ../tests.fraig/sim1" << i << ".aag -replace" << endl;
        ofs << "cirprint -summary" << endl;
        ofs << "cirprint -net"     << endl;
        ofs << "cirprint -po"      << endl;
        ofs << "cirprint -pi"      << endl;
        ofs << "cirprint -flo"     << endl;
        ofs << "cirwrite"          << endl;
        if(i == 0) { 
            for(size_t i = 0; i <= 700; ++i){
                unsigned idx = rand()%754;
                unsigned depth = rand()%150;
                ofs << "cirgate " << idx << endl;
                ofs << "cirgate " << idx << " -fanin " << depth << endl;
                ofs << "cirgate " << idx << " -fanout " << depth << endl;
            }
        }
        else if(i == 1) { 
            for(size_t i = 0; i <= 3; ++i){
                unsigned idx = rand()%3;
                unsigned depth = rand()%2;
                ofs << "cirgate " << idx << endl;
                ofs << "cirgate " << idx << " -fanin " << depth << endl;
                ofs << "cirgate " << idx << " -fanout " << depth << endl;
            }
        }
        else if(i == 2) { 
            for(size_t i = 0; i <= 3000; ++i){
                unsigned idx = rand()%9643;
                unsigned depth = rand()%2000;
                ofs << "cirgate " << idx << endl;
                ofs << "cirgate " << idx << " -fanin " << depth << endl;
                ofs << "cirgate " << idx << " -fanout " << depth << endl;
            }
        }
        else if(i == 3) { 
            for(size_t i = 0; i <= 10000; ++i){
                unsigned idx = rand()%88411;
                unsigned depth = rand()%20000;
                ofs << "cirgate " << idx << endl;
                ofs << "cirgate " << idx << " -fanin " << depth << endl;
                ofs << "cirgate " << idx << " -fanout " << depth << endl;
            }
        }
        else { 
            for(size_t i = 0; i <= 928; ++i){
                unsigned idx = rand()%928;
                unsigned depth = rand()%300;
                ofs << "cirgate " << idx << endl;
                ofs << "cirgate " << idx << " -fanin " << depth << endl;
                ofs << "cirgate " << idx << " -fanout " << depth << endl;
            }
        }
    }*/
    ofs << "usage" << endl;
    ofs << "q -f"  << endl;
}