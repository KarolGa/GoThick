
#include "Unit.h"
class Mob :
	public Unit
{
protected:
	unsigned experince;
	unsigned gold;
	// metoda zwracaj�ca obiekt klasy Item, kt�ra losuje czy gracz co� wygra� i co

public:
	Mob();
	virtual ~Mob();
};
