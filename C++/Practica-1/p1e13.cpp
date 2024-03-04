#include <iostream>
using namespace std;
int main()
{
bool ok = (3.0 * (0.1 / 3.0)) == ((3.0 * 0.1) / 3.0);
cout << "Resultado de (3.0 * (0.1 / 3.0)) == ((3.0 * 0.1) / 3.0): "
<< boolalpha << ok << " -> ERROR" << endl;
}

/*Hay un booleano que tiene 2 operaciones, este al ejecutarlo sale error porque
error porque las operaciones estan en un distinto orden y como tiene == y no son iguales pues sale error. Si fuese en el mismo orden sería TRU. */
