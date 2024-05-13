#!/bin/bash
source ./compilar.s
cd acessorios-cpp/
g++ -c *.cpp 
cd ..
cd core-simulador-cpp
g++ -c *.cpp 
cd ..
g++ principal//main.cpp acessorios-cpp//*.o  core-simulador-cpp//*.o

g++ -o saida principal//main.cpp acessorios-cpp//*.o personagens-cpp//*.o core-simulador-cpp//*.o
