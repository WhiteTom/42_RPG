#include "h.h"

void		fill_sklist(t_sklist **sklist)
{
	(*sklist)->sk1 = malloc(sizeof(t_sk));
	(*sklist)->sk2 = malloc(sizeof(t_sk));
	(*sklist)->sk3 = malloc(sizeof(t_sk));
	(*sklist)->sk4 = malloc(sizeof(t_sk));
	(*sklist)->sk5 = malloc(sizeof(t_sk));
	(*sklist)->sk6 = malloc(sizeof(t_sk));
	(*sklist)->sk7 = malloc(sizeof(t_sk));
	(*sklist)->sk8 = malloc(sizeof(t_sk));
	(*sklist)->sk1->name = ft_strdup("Mjolnir smash");
	(*sklist)->sk1->dmg = 20;
	(*sklist)->sk1->mdmg = 20;
	(*sklist)->sk1->cost = 40;
	(*sklist)->sk2->name = ft_strdup("Call of the storm");
	(*sklist)->sk2->dmg = 0;
	(*sklist)->sk2->mdmg = 30;
	(*sklist)->sk2->cost = 20;
	(*sklist)->sk3->name = ft_strdup("Steel zhirlwind");
	(*sklist)->sk3->dmg = 0;
	(*sklist)->sk3->mdmg = 15;
	(*sklist)->sk3->cost = 0;
	(*sklist)->sk4->name = ft_strdup("Ultimate Tourbilooool!");
	(*sklist)->sk4->dmg = 100;
	(*sklist)->sk4->mdmg = 100;
	(*sklist)->sk4->cost = 200;
	(*sklist)->sk5->name = ft_strdup("Smoke bomb");
	(*sklist)->sk5->dmg = 20;
	(*sklist)->sk5->mdmg = 0;
	(*sklist)->sk5->cost = 40;	
	(*sklist)->sk6->name = ft_strdup("Dagger sting");
	(*sklist)->sk6->dmg = 15;
	(*sklist)->sk6->mdmg = 0;
	(*sklist)->sk6->cost = 0;
	(*sklist)->sk7->name = ft_strdup("Backlash");
	(*sklist)->sk7->dmg = 40;
	(*sklist)->sk7->mdmg = 0;
	(*sklist)->sk7->cost = 40;
	(*sklist)->sk8->name = ft_strdup("Poisoned candies");
	(*sklist)->sk8->dmg = 0;
	(*sklist)->sk8->mdmg = 50;
	(*sklist)->sk8->cost = 200;
}