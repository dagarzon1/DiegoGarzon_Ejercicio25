!/bin/bash

#PBS -l nodes=1;intel:ppn=8, mem=64gb
#PBS -l walltime=00:05:00
#PBS -M da.garzon1@uniandes.edu.co
#PBS -m abe
#PBS -N DiegoGarzon_Ejercicio25
#PBS -j oe

module load anaconda/python3
cd da.garzon1/DiegoGarzon_Ejercicio25
make
