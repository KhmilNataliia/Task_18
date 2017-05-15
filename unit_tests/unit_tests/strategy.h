 
enum CharachterType
{
	ORK,TROLL,PEGAS,ELPH,VAMPIRE,GARPY,WITCH
};

class Charachter
{
	int health;
	int weapon_power;
public:
	Charachter(int health_, int power_)
	{
		health = health_; weapon_power = power_;
	}
	bool beat(int power)
	{
		if (power >= health)
		{
			health = 0;
			return false;
		}
		else
		{
			health -= power;
			return true;
		}
	}
	int get_power(){ return weapon_power; }
	int get_health() { return health; }
	virtual bool can_beat(CharachterType type) = 0;
	virtual CharachterType get_type() = 0;
};

class Ork:public Charachter
{
	int max_health = 1000;
	int weapon = 50;
	CharachterType HT = ORK;
public:
	Ork() : Charachter(1000, 50) {};
	CharachterType get_type() { return HT; }
	bool can_beat(CharachterType type)
	{
		if ( type == TROLL || type == PEGAS || type == WITCH || type == VAMPIRE)
			return true;
		else
			return false;
	}
};

class Troll :public Charachter
{
	int max_health = 1200;
	int weapon = 90;
	CharachterType HT = TROLL;
public:
	Troll() : Charachter(1200, 90) { };
	CharachterType get_type() { return HT; }
	bool can_beat(CharachterType type)
	{
		if (type == ORK ||  type == PEGAS || type == VAMPIRE )
			return true;
		else
			return false;
	}
};

class Pegas :public Charachter
{
	int max_health = 2000;
	int weapon = 140;
	CharachterType HT = PEGAS;
public:
	Pegas() : Charachter(2000, 140) {};
	CharachterType get_type() { return HT; }
	bool can_beat(CharachterType type)
	{
		if (type == ORK || type == TROLL || type == VAMPIRE || type==ELPH || type==WITCH)
			return true;
		else
			return false;
	}
};

class Elph :public Charachter
{
	int max_health = 1600;
	int weapon = 120;
	CharachterType HT = ELPH;
public:
	Elph() : Charachter(1600, 120) {};
	CharachterType get_type() { return HT; }
	bool can_beat(CharachterType type)
	{
		if (type == VAMPIRE ||  type == WITCH || type==PEGAS || type==GARPY)
			return true;
		else
			return false;
	}
};

class Vampire :public Charachter
{
	int max_health = 2400;
	int weapon = 180;
	CharachterType HT = VAMPIRE;
public:
	Vampire() : Charachter(2400, 180) {};
	CharachterType get_type() { return HT; }
	bool can_beat(CharachterType type)
	{
		if ( type == WITCH || type == PEGAS || type == GARPY || type==ELPH || type==ORK || type==TROLL)
			return true;
		else
			return false;
	}
};

class Garpy :public Charachter
{
	int max_health = 2200;
	int weapon = 160;
	CharachterType HT =GARPY;
public:
	Garpy() : Charachter(2200, 160) {};
	CharachterType get_type() { return HT; }
	bool can_beat(CharachterType type)
	{
		if (type == WITCH ||  type == VAMPIRE || type == ELPH || type == ORK || type == TROLL)
			return true;
		else
			return false;
	}
};


class Witch :public Charachter
{
	int max_health = 3000;
	int weapon = 260;
	CharachterType HT = WITCH;
public:
	Witch() : Charachter(3000, 260) {};
	CharachterType get_type() { return HT; }
	bool can_beat(CharachterType type)
	{
		if (type == WITCH || type == VAMPIRE || type == ELPH || type == ORK || type == TROLL || type==GARPY || type==PEGAS)
			return true;
		else
			return false;
	}
};


class Game
{
	Charachter* CHR;
public:
	Game(Charachter* C) :CHR(C){};
	bool can_beat(CharachterType t)
	{
		return CHR->can_beat(t);
	}
	bool beat(int p)
	{
		return CHR->beat(p);
	}
	int get_health() { return CHR->get_health(); }
	int get_power() { return CHR->get_power(); }
	CharachterType get_type() { return CHR->get_type(); }
};

