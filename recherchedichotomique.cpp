//bounoir fabien
//permet de recherche un nombre dans un tableau en indiquant ca place si ce nombre n'est pas a l'interieur il renvoie -1

#include <iostream> 

#define PAS_TROUVE -1

using namespace std;

int rechercher(int valeur, int t[], int n)
{
    int debut = 0;
    int fin = n - 1;
    int milieu = (debut + fin) / 2;

    while(debut <= fin)
    {
        if(valeur < t[milieu])
        {
			fin = milieu - 1;
        }
        else if(valeur > t[milieu])
		{
			debut = milieu + 1;
		} 
		else
		{
			return milieu ;
		}
        milieu = (debut + fin) / 2;        
    }
    
    return PAS_TROUVE;
}

int main()
{
    // Cas normaux
    int t1[] = {1, 3, 8, 11, 15, 20, 22, 26, 30, 35, 40};
    cout << " 3 : " << rechercher(11, t1, 11) << endl; // dans le tableau
    cout << " -1 : " << rechercher(31, t1, 11) << endl;// pas dans le tableau
    
    // Cas limites
    cout << " 0 : " << rechercher(1, t1, 11) << endl; // première case
    cout << " 10 : " << rechercher(40, t1, 11) << endl; // dernière case
    cout << " 5 : " << rechercher(20, t1, 11) << endl; // case milieu
    
    return 0;
}
