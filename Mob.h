
#include "Unit.h"
class Mob :
	public Unit
{
protected:
	unsigned experince;
	unsigned gold;
	// metoda zwracaj¹ca obiekt klasy Item, która losuje czy gracz coœ wygra³ i co

public:
	Mob();
	virtual ~Mob();
};
