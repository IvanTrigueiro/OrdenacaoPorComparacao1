#include <iostream>
#include "SelectionSort.h"
#include "InsertionSort.h"
#include <fstream>
using namespace std;

int main()
{
    while(true){
        int testes;
        cout<< "Os testes de 1 a 12 sao os testes usando Selection Sort,"<<endl;
        cout<< "enquanto nos de 13 a 24 sao os testes usando Insertion Sort."<<endl;
        cout<< "Digite um numero de 1 a 24 para os diferentes testes ou 0 para sair: " <<endl;
        cin>> testes;

        switch(testes){
            case 1:
                {
                ifstream inFile("num.1000.1.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.1000.1.in");
                if(!inFile){
                    cerr << "Unable to open file num.1000.1.in";
                    return 0;
                }

                int dados[1000];
                for(int i = 0; i < 1000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                SelectionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 2:
                {
                ifstream inFile("num.1000.2.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.1000.2.in");
                if(!inFile){
                    cerr << "Unable to open file num.1000.2.in";
                    return 0;
                }

                int dados[1000];
                for(int i = 0; i < 1000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                SelectionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 3:
                {
                ifstream inFile("num.1000.3.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.1000.3.in");
                if(!inFile){
                    cerr << "Unable to open file num.1000.3.in";
                    return 0;
                }

                int dados[1000];
                for(int i = 0; i < 1000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                SelectionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 4:
                {
                ifstream inFile("num.1000.4.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.1000.4.in");
                if(!inFile){
                    cerr << "Unable to open file num.1000.4.in";
                    return 0;
                }

                int dados[1000];
                for(int i = 0; i < 1000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                SelectionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 5:
                {
                ifstream inFile("num.10000.1.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.10000.1.in");
                if(!inFile){
                    cerr << "Unable to open file num.10000.1.in";
                    return 0;
                }

                int dados[10000];
                for(int i = 0; i < 10000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 10000; i++){
                    if(i == 10000){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                SelectionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 6:
                {
                ifstream inFile("num.10000.2.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.10000.2.in");
                if(!inFile){
                    cerr << "Unable to open file num.10000.2.in";
                    return 0;
                }

                int dados[10000];
                for(int i = 0; i < 10000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                SelectionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 7:
                {
                ifstream inFile("num.10000.3.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.10000.3.in");
                if(!inFile){
                    cerr << "Unable to open file num.10000.3.in";
                    return 0;
                }

                int dados[10000];
                for(int i = 0; i < 10000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                SelectionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 8:
                {
                ifstream inFile("num.10000.4.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.10000.4.in");
                if(!inFile){
                    cerr << "Unable to open file num.10000.4.in";
                    return 0;
                }

                int dados[10000];
                for(int i = 0; i < 10000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                SelectionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 9:
                {
                ifstream inFile("num.100000.1.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.100000.1.in");
                if(!inFile){
                    cerr << "Unable to open file num.100000.1.in";
                    return 0;
                }

                int dados[100000];
                cout<< "Populando array!!" <<endl;
                for(int i = 0; i < 100000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                SelectionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 10:
                {
                ifstream inFile("num.100000.2.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.100000.2.in");
                if(!inFile){
                    cerr << "Unable to open file num.100000.2.in";
                    return 0;
                }

                int dados[100000];
                cout<< "Populando array!!" <<endl;
                for(int i = 0; i < 100000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                SelectionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 11:
                {
                ifstream inFile("num.100000.3.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.100000.3.in");
                if(!inFile){
                    cerr << "Unable to open file num.100000.3.in";
                    return 0;
                }

                int dados[100000];
                cout<< "Populando array!!" <<endl;
                for(int i = 0; i < 100000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                SelectionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 12:
                {
                ifstream inFile("num.100000.4.in");
               // inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.100000.4.in");
                if(!inFile){
                    cerr << "Unable to open file num.100000.4.in";
                    return 0;
                }

                int dados[100000];
                cout<< "Populando array!!" <<endl;
                for(int i = 0; i < 100000; i++){
                    inFile >> dados[i];
                }
                /*
                for(int i = 0; i <= 100000; i++){
                    if(i == 100000){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                SelectionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 13:
                {
                ifstream inFile("num.1000.1.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.1000.1.in");
                if(!inFile){
                    cerr << "Unable to open file num.1000.1.in";
                    return 0;
                }

                int dados[1000];
                for(int i = 0; i < 1000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                InsertionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 14:
                {
                ifstream inFile("num.1000.2.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.1000.2.in");
                if(!inFile){
                    cerr << "Unable to open file num.1000.2.in";
                    return 0;
                }

                int dados[1000];
                for(int i = 0; i < 1000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                InsertionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 15:
                {
                ifstream inFile("num.1000.3.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.1000.3.in");
                if(!inFile){
                    cerr << "Unable to open file num.1000.3.in";
                    return 0;
                }

                int dados[1000];
                for(int i = 0; i < 1000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                InsertionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 16:
                {
                ifstream inFile("num.1000.4.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.1000.4.in");
                if(!inFile){
                    cerr << "Unable to open file num.1000.4.in";
                    return 0;
                }

                int dados[1000];
                for(int i = 0; i < 1000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                InsertionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 17:
                {
                ifstream inFile("num.10000.1.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.10000.1.in");
                if(!inFile){
                    cerr << "Unable to open file num.10000.1.in";
                    return 0;
                }

                int dados[10000];
                for(int i = 0; i < 10000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                InsertionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 18:
                {
                ifstream inFile("num.10000.2.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.10000.2.in");
                if(!inFile){
                    cerr << "Unable to open file num.10000.2.in";
                    return 0;
                }

                int dados[10000];
                for(int i = 0; i < 10000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                InsertionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 19:
                {
                ifstream inFile("num.10000.3.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.10000.3.in");
                if(!inFile){
                    cerr << "Unable to open file num.10000.3.in";
                    return 0;
                }

                int dados[10000];
                for(int i = 0; i < 10000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                InsertionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 20:
                {
                ifstream inFile("num.10000.4.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.10000.4.in");
                if(!inFile){
                    cerr << "Unable to open file num.10000.4.in";
                    return 0;
                }

                int dados[10000];
                for(int i = 0; i < 10000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                InsertionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 21:
                {
                ifstream inFile("num.100000.1.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.100000.1.in");
                if(!inFile){
                    cerr << "Unable to open file num.100000.1.in";
                    return 0;
                }

                int dados[100000];
                cout<< "Populando array!!" <<endl;
                for(int i = 0; i < 100000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                InsertionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 22:
                {
                ifstream inFile("num.100000.2.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.100000.2.in");
                if(!inFile){
                    cerr << "Unable to open file num.100000.2.in";
                    return 0;
                }

                int dados[100000];
                cout<< "Populando array!!" <<endl;
                for(int i = 0; i < 100000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                InsertionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 23:
                {
                ifstream inFile("num.100000.3.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.100000.3.in");
                if(!inFile){
                    cerr << "Unable to open file num.100000.3.in";
                    return 0;
                }

                int dados[100000];
                cout<< "Populando array!!" <<endl;
                for(int i = 0; i < 100000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                InsertionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 24:
                {
                ifstream inFile("num.100000.4.in");
                //inFile.open("C:\\Users\\Ivan\\Documents\\Análise de Projetos e Algoritmos\\OrdenacaoPorComparacao1\\OrdenacaoPorComparacaoI\\instancias-num\\num.100000.4.in");
                if(!inFile){
                    cerr << "Unable to open file num.100000.4.in";
                    return 0;
                }

                int dados[100000];
                cout<< "Populando array!!" <<endl;
                for(int i = 0; i < 100000; i++){
                    inFile >> dados[i];
                }

                /*for(int i = 0; i <= 1001-1; i++){
                    if(i == 1001-1){
                        cout<< dados[i] << ".";
                    }
                    else
                    cout << dados[i] << ", ";
                }*/

                int total = sizeof(dados)/sizeof(dados[0]);
                InsertionSort(dados, total);

                for(int i = 0; i <= total-1; i++){
                /*    if(i == total-1){
                        cout<< dados[i] << ".";
                    }
                    else*/
                    cout << dados[i] <<endl; //", ";
                }
                cout<<endl;
                break;
                }
            case 0:
                return 0;

            default:
                cout<< "Valor Invalido"<<endl;
                cout<<endl;
                break;
        }



        }


    return 0;
}
