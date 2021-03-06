#include "stdafx.h"
#include "CppUnitTest.h"
#include "catch.hpp"
#include "strategy.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit_tests
{		

	TEST_CASE("ork_pow")
	{
		Ork *ork = new Ork();
		int res=ork->get_power();
		REQUIRE(res == 50);
	};
	TEST_CASE("ork_health")
	{
		Ork *ork = new Ork();
		int res = ork->get_health();
		REQUIRE(res == 1000);
	};
	TEST_CASE("ork_type")
	{
		Ork *ork = new Ork();
		CharachterType res = ork->get_type();
		REQUIRE(res == ORK);
	};
	TEST_CASE("ork_can_beat1")
	{
		Ork *ork = new Ork();
		bool res = ork->can_beat(ORK);
		REQUIRE(res == false);
	};
	TEST_CASE("ork_can_beat2")
	{
		Ork *ork = new Ork();
		bool res = ork->can_beat(TROLL);
		REQUIRE(res == true);
	};
	TEST_CASE("ork_can_beat3")
	{
		Ork *ork = new Ork();
		bool res = ork->can_beat(PEGAS);
		REQUIRE(res == true);
	};
	TEST_CASE("ork_can_beat4")
	{
		Ork *ork = new Ork();
		bool res = ork->can_beat(WITCH);
		REQUIRE(res == true);
	};
	TEST_CASE("ork_can_beat5")
	{
		Ork *ork = new Ork();
		bool res = ork->can_beat(VAMPIRE);
		REQUIRE(res == true);
	};
	TEST_CASE("ork_can_beat6")
	{
		Ork *ork = new Ork();
		bool res = ork->can_beat(ELPH);
		REQUIRE(res == false);
	};
	TEST_CASE("ork_can_beat7")
	{
		Ork *ork = new Ork();
		bool res = ork->can_beat(GARPY);
		REQUIRE(res == false);
	};
	TEST_CASE("ork_beated1")
	{
		Ork *ork = new Ork();
		ork->beat(260);
		int res = ork->get_health();
		REQUIRE(res == 740);
	};
	TEST_CASE("ork_beated2")
	{
		Ork *ork = new Ork();
		bool res=ork->beat(1200);
		REQUIRE(res == false);
	};

	////////////////////////////

	TEST_CASE("troll_pow")
	{
		Troll *troll = new Troll();
		int res = troll->get_power();
		REQUIRE(res == 90);
	};
	TEST_CASE("troll_health")
	{
		Troll *troll = new Troll();
		int res = troll->get_health();
		REQUIRE(res == 1200);
	};
	TEST_CASE("troll_type")
	{
		Troll *troll = new Troll();
		CharachterType res = troll->get_type();
		REQUIRE(res == TROLL);
	};
	TEST_CASE("troll_can_beat1")
	{
		Troll *troll = new Troll();
		bool res = troll->can_beat(ORK);
		REQUIRE(res == true);
	};
	TEST_CASE("troll_can_beat2")
	{
		Troll *troll = new Troll();
		bool res = troll->can_beat(TROLL);
		REQUIRE(res == false);
	};
	TEST_CASE("troll_can_beat3")
	{
		Troll *troll = new Troll();
		bool res = troll->can_beat(PEGAS);
		REQUIRE(res == true);
	};
	TEST_CASE("troll_can_beat4")
	{
		Troll *troll = new Troll();
		bool res = troll->can_beat(WITCH);
		REQUIRE(res == false);
	};
	TEST_CASE("troll_can_beat5")
	{
		Troll *troll = new Troll();
		bool res = troll->can_beat(VAMPIRE);
		REQUIRE(res == true);
	};
	TEST_CASE("troll_can_beat6")
	{
		Troll *troll = new Troll();
		bool res = troll->can_beat(ELPH);
		REQUIRE(res == false);
	};
	TEST_CASE("troll_can_beat7")
	{
		Troll *troll = new Troll();
		bool res = troll->can_beat(GARPY);
		REQUIRE(res == false);
	};
	TEST_CASE("troll_beated1")
	{
		Troll *troll = new Troll();
		troll->beat(200);
		int res = troll->get_health();
		REQUIRE(res == 1000);
	};
	TEST_CASE("troll_beated2")
	{
		Troll *troll = new Troll();
		bool res = troll->beat(1300);
		REQUIRE(res == false);
	};

	//////////////////////////////

	TEST_CASE("pegas_pow")
	{
		Pegas *pegas = new Pegas();
		int res = pegas->get_power();
		REQUIRE(res == 140);
	};
	TEST_CASE("pegas_health")
	{
		Pegas *pegas = new Pegas();
		int res = pegas->get_health();
		REQUIRE(res == 2000);
	};
	TEST_CASE("pegas_type")
	{
		Pegas *pegas = new Pegas();
		CharachterType res = pegas->get_type();
		REQUIRE(res == PEGAS);
	};
	TEST_CASE("pegas_can_beat1")
	{
		Pegas *pegas = new Pegas();
		bool res = pegas->can_beat(ORK);
		REQUIRE(res == true);
	};
	TEST_CASE("pegas_can_beat2")
	{
		Pegas *pegas = new Pegas();
		bool res = pegas->can_beat(TROLL);
		REQUIRE(res == true);
	};
	TEST_CASE("pegas_can_beat3")
	{
		Pegas *pegas = new Pegas();
		bool res = pegas->can_beat(PEGAS);
		REQUIRE(res == false);
	};
	TEST_CASE("pegas_can_beat4")
	{
		Pegas *pegas = new Pegas();
		bool res = pegas->can_beat(WITCH);
		REQUIRE(res == true);
	};
	TEST_CASE("pegas_can_beat5")
	{
		Pegas *pegas = new Pegas();
		bool res = pegas->can_beat(VAMPIRE);
		REQUIRE(res == true);
	};
	TEST_CASE("pegas_can_beat6")
	{
		Pegas *pegas = new Pegas();
		bool res = pegas->can_beat(ELPH);
		REQUIRE(res == true);
	};
	TEST_CASE("pegas_can_beat7")
	{
		Pegas *pegas = new Pegas();
		bool res = pegas->can_beat(GARPY);
		REQUIRE(res == false);
	};
	TEST_CASE("pegas_beated1")
	{
		Pegas *pegas = new Pegas();
		pegas->beat(200);
		int res = pegas->get_health();
		REQUIRE(res == 1800);
	};
	TEST_CASE("pegas_beated2")
	{
	    Pegas *pegas = new Pegas();
		bool res = pegas->beat(2300);
		REQUIRE(res == false);
	};

	///////////////////////////////////////////////////////

	TEST_CASE("elph_pow")
	{
		Elph *elph = new Elph();
		int res = elph->get_power();
		REQUIRE(res == 120);
	};
	TEST_CASE("elph_health")
	{
		Elph *elph = new Elph();
		int res =elph->get_health();
		REQUIRE(res == 1600);
	};
	TEST_CASE("elph_type")
	{
		Elph *elph = new Elph();
		CharachterType res = elph->get_type();
		REQUIRE(res == ELPH);
	};
	TEST_CASE("elph_can_beat1")
	{
		Elph *elph = new Elph();
		bool res = elph->can_beat(ORK);
		REQUIRE(res == false);
	};
	TEST_CASE("elph_can_beat2")
	{
		Elph *elph = new Elph();
		bool res = elph->can_beat(TROLL);
		REQUIRE(res == false);
	};
	TEST_CASE("elph_can_beat3")
	{
		Elph *elph = new Elph();
		bool res = elph->can_beat(PEGAS);
		REQUIRE(res == true);
	};
	TEST_CASE("elph_can_beat4")
	{
		Elph *elph = new Elph();
		bool res = elph->can_beat(WITCH);
		REQUIRE(res == true);
	};
	TEST_CASE("elph_can_beat5")
	{
		Elph *elph = new Elph();
		bool res = elph->can_beat(VAMPIRE);
		REQUIRE(res == true);
	};
	TEST_CASE("elph_can_beat6")
	{
		Elph *elph = new Elph();
		bool res = elph->can_beat(ELPH);
		REQUIRE(res == false);
	};
	TEST_CASE("elph_can_beat7")
	{
		Elph *elph = new Elph();
		bool res = elph->can_beat(GARPY);
		REQUIRE(res == true);
	};
	TEST_CASE("elph_beated1")
	{
		Elph *elph = new Elph();
		elph->beat(200);
		int res = elph->get_health();
		REQUIRE(res == 1400);
	};
	TEST_CASE("elph_beated2")
	{
		Elph *elph = new Elph();
		bool res = elph->beat(2300);
		REQUIRE(res == false);
	};

	///////////////////////////////////////

	TEST_CASE("vampire_pow")
	{
		Vampire *vampire = new Vampire();
		int res = vampire->get_power();
		REQUIRE(res == 180);
	};
	TEST_CASE("vampire_health")
	{
		Vampire *vampire = new Vampire();
		int res = vampire->get_health();
		REQUIRE(res == 2400);
	};
	TEST_CASE("vampire_type")
	{
		Vampire *vampire = new Vampire();
		CharachterType res = vampire->get_type();
		REQUIRE(res == VAMPIRE);
	};
	TEST_CASE("vampire_can_beat1")
	{
		Vampire *vampire = new Vampire();
		bool res = vampire->can_beat(ORK);
		REQUIRE(res == true);
	};
	TEST_CASE("vampire_can_beat2")
	{
		Vampire *vampire = new Vampire();
		bool res = vampire->can_beat(TROLL);
		REQUIRE(res == true);
	};
	TEST_CASE("vampire_can_beat3")
	{
		Vampire *vampire = new Vampire();
		bool res = vampire->can_beat(PEGAS);
		REQUIRE(res == true);
	};
	TEST_CASE("vampire_can_beat4")
	{
		Vampire *vampire = new Vampire();
		bool res = vampire->can_beat(WITCH);
		REQUIRE(res == true);
	};
	TEST_CASE("vampire_can_beat5")
	{
		Vampire *vampire = new Vampire();
		bool res = vampire->can_beat(VAMPIRE);
		REQUIRE(res == false);
	};
	TEST_CASE("vampire_can_beat6")
	{
		Vampire *vampire = new Vampire();
		bool res = vampire->can_beat(ELPH);
		REQUIRE(res == true);
	};
	TEST_CASE("vampire_can_beat7")
	{
		Vampire *vampire = new Vampire();
		bool res = vampire->can_beat(GARPY);
		REQUIRE(res == true);
	};
	TEST_CASE("vampire_beated1")
	{
		Vampire *vampire = new Vampire();
		vampire->beat(200);
		int res = vampire->get_health();
		REQUIRE(res == 2200);
	};
	TEST_CASE("vampire_beated2")
	{
		Elph *vampire = new Elph();
		bool res = vampire->beat(2500);
		REQUIRE(res == false);
	};

	///////////////////////////////


	TEST_CASE("garpy_pow")
	{
		Garpy *garpy = new Garpy();
		int res = garpy->get_power();
		REQUIRE(res == 160);
	};
	TEST_CASE("garpy_health")
	{
		Garpy *garpy = new Garpy();
		int res = garpy->get_health();
		REQUIRE(res == 2200);
	};
	TEST_CASE("garpy_type")
	{
		Garpy *garpy = new Garpy();
		CharachterType res = garpy->get_type();
		REQUIRE(res == GARPY);
	};
	TEST_CASE("garpy_can_beat1")
	{
		Garpy *garpy = new Garpy();
		bool res = garpy->can_beat(ORK);
		REQUIRE(res == true);
	};
	TEST_CASE("garpy_can_beat2")
	{
		Garpy *garpy = new Garpy();
		bool res = garpy->can_beat(TROLL);
		REQUIRE(res == true);
	};
	TEST_CASE("garpy_can_beat3")
	{
		Garpy *garpy = new Garpy();
		bool res = garpy->can_beat(PEGAS);
		REQUIRE(res == false);
	};
	TEST_CASE("garpy_can_beat4")
	{
		Garpy *garpy = new Garpy();
		bool res = garpy->can_beat(WITCH);
		REQUIRE(res == true);
	};
	TEST_CASE("garpy_can_beat5")
	{
		Garpy *garpy = new Garpy();
		bool res = garpy->can_beat(VAMPIRE);
		REQUIRE(res == true);
	};
	TEST_CASE("garpy_can_beat6")
	{
		Garpy *garpy = new Garpy();
		bool res = garpy->can_beat(ELPH);
		REQUIRE(res == true);
	};
	TEST_CASE("garpy_can_beat7")
	{
		Garpy *garpy = new Garpy();
		bool res = garpy->can_beat(GARPY);
		REQUIRE(res == false);
	};
	TEST_CASE("garpy_beated1")
	{
		Garpy *garpy = new Garpy();
		garpy->beat(200);
		int res = garpy->get_health();
		REQUIRE(res == 2000);
	};
	TEST_CASE("garpy_beated2")
	{
		Garpy *garpy = new Garpy();
		bool res = garpy->beat(2500);
		REQUIRE(res == false);
	};

	////////////////////////////////////

	TEST_CASE("witch_pow")
	{
		Witch *witch = new Witch();
		int res = witch->get_power();
		REQUIRE(res == 260);
	};
	TEST_CASE("witch_health")
	{
		Witch *witch = new Witch();
		int res = witch->get_health();
		REQUIRE(res == 3000);
	};
	TEST_CASE("witch_type")
	{
		Witch *witch = new Witch();
		CharachterType res = witch->get_type();
		REQUIRE(res ==WITCH);
	};
	TEST_CASE("witch_can_beat1")
	{
		Witch *witch = new Witch();
		bool res = witch->can_beat(ORK);
		REQUIRE(res == true);
	};
	TEST_CASE("witch_can_beat2")
	{
		Witch *witch = new Witch();
		bool res = witch->can_beat(TROLL);
		REQUIRE(res == true);
	};
	TEST_CASE("witch_can_beat3")
	{
		Witch *witch = new Witch();
		bool res = witch->can_beat(PEGAS);
		REQUIRE(res == true);
	};
	TEST_CASE("witch_can_beat4")
	{
		Witch *witch = new Witch();
		bool res = witch->can_beat(WITCH);
		REQUIRE(res == true);
	};
	TEST_CASE("witch_can_beat5")
	{
		Witch *witch = new Witch();
		bool res = witch->can_beat(VAMPIRE);
		REQUIRE(res == true);
	};
	TEST_CASE("witch_can_beat6")
	{
		Witch *witch = new Witch();
		bool res = witch->can_beat(ELPH);
		REQUIRE(res == true);
	};
	TEST_CASE("witch_can_beat7")
	{
		Witch *witch = new Witch();
		bool res = witch->can_beat(GARPY);
		REQUIRE(res == true);
	};
	TEST_CASE("witch_beated1")
	{
		Witch *witch = new Witch();
		witch->beat(200);
		int res = witch->get_health();
		REQUIRE(res == 2800);
	};
	TEST_CASE("witch_beated2")
	{
		Witch *witch = new Witch();
		bool res = witch->beat(3500);
		REQUIRE(res == false);
	};
	TEST_CASE("game1")
	{
		Witch *witch = new Witch();
		Game *g = new Game(witch);
		bool res=true;
		bool t1 = g->can_beat(GARPY);
		bool t2 = g->can_beat(ORK);
		bool t3 = g->can_beat(TROLL);
		bool t4 = g->can_beat(PEGAS);
		bool t5 = g->can_beat(ELPH);
		bool t6 = g->can_beat(WITCH);
		bool t7 = g->can_beat(VAMPIRE);
		int pow = g->get_power();
		int health = g->get_health();
		CharachterType t = g->get_type();
		g->beat(1000);
		int h = g->get_health();
		bool b = g->beat(3500);
		if (!t1 || !t2 || !t3 || !t4 || !t5 || !t6 || !t7 || b) res = false;
		if (pow != 260 || health != 3000 || h != 2000 || t != WITCH) res = false;
		REQUIRE(res == true);
	};
}