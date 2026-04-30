#include <stdio.h>
void llamarFuncion();
int main() 
{
    for (int j=0 ; j < 5 ; j++) 
    {
        llamarFuncion(); 
    }
}
    void llamarFuncion() 
{
    static int numVeces = 0;
    printf("Esta función se ha llamado %d veces.\n",++numVeces); 
}
