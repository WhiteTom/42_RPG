/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skill_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvalnet <thvalnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/02 16:35:15 by thvalnet          #+#    #+#             */
/*   Updated: 2014/02/02 16:35:18 by thvalnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h.h"

void		init_sklist(t_sklist *sklist)
{
	sklist->sk01 = malloc(sizeof(t_sk));
	sklist->sk02 = malloc(sizeof(t_sk));
	sklist->sk03 = malloc(sizeof(t_sk));
	sklist->sk04 = malloc(sizeof(t_sk));
	sklist->sk05 = malloc(sizeof(t_sk));
	sklist->sk06 = malloc(sizeof(t_sk));
	sklist->sk07 = malloc(sizeof(t_sk));
	sklist->sk08 = malloc(sizeof(t_sk));
	sklist->sk09 = malloc(sizeof(t_sk));
	sklist->sk10 = malloc(sizeof(t_sk));
	sklist->sk11 = malloc(sizeof(t_sk));
	sklist->sk12 = malloc(sizeof(t_sk));
	sklist->sk13 = malloc(sizeof(t_sk));
	sklist->sk14 = malloc(sizeof(t_sk));
	sklist->sk15 = malloc(sizeof(t_sk));
	sklist->sk16 = malloc(sizeof(t_sk));
	sklist->sk17 = malloc(sizeof(t_sk));
	sklist->sk18 = malloc(sizeof(t_sk));
	sklist->sk19 = malloc(sizeof(t_sk));
	sklist->sk20 = malloc(sizeof(t_sk));
	sklist->sk21 = malloc(sizeof(t_sk));
	sklist->sk22 = malloc(sizeof(t_sk));
	sklist->sk23 = malloc(sizeof(t_sk));
	sklist->sk24 = malloc(sizeof(t_sk));
	sklist->sk25 = malloc(sizeof(t_sk));
	sklist->sk26 = malloc(sizeof(t_sk));
	sklist->sk27 = malloc(sizeof(t_sk));
	sklist->sk28 = malloc(sizeof(t_sk));
	sklist->sk29 = malloc(sizeof(t_sk));
	sklist->sk30 = malloc(sizeof(t_sk));
	sklist->sk31 = malloc(sizeof(t_sk));
	sklist->sk32 = malloc(sizeof(t_sk));
	sklist->sk33 = malloc(sizeof(t_sk));
	sklist->sk34 = malloc(sizeof(t_sk));
	sklist->sk35 = malloc(sizeof(t_sk));
	sklist->sk36 = malloc(sizeof(t_sk));
	sklist->sk37 = malloc(sizeof(t_sk));
	sklist->sk38 = malloc(sizeof(t_sk));
	sklist->sk39 = malloc(sizeof(t_sk));
	sklist->sk40 = malloc(sizeof(t_sk));
	/* Thor */
		sklist->sk01->name = ft_strdup("Mjolnir smash");
	sklist->sk01->desc = ft_strdup("Thor smashes his hammer on ennemy's head");
	sklist->sk01->dmg = 20;
	sklist->sk01->mdmg = 20;
	sklist->sk01->cost = 40;
		sklist->sk02->name = ft_strdup("Call of the storm");
	sklist->sk02->desc = ft_strdup("Raise your hand and let the thunder come !");
	sklist->sk02->dmg = 0;
	sklist->sk02->mdmg = 30;
	sklist->sk02->cost = 20;
		sklist->sk03->name = ft_strdup("Steel whirlwind");
	sklist->sk03->desc = ft_strdup("Slice and dice ennemy's body");
	sklist->sk03->dmg = 0;
	sklist->sk03->mdmg = 15;
	sklist->sk03->cost = 0;
		sklist->sk04->name = ft_strdup("Ultimate Tourbilooool!");
	sklist->sk04->desc = ft_strdup("BocaaaaaaliaaaaAAAaaaAAAaaaAAAaaaAAA");
	sklist->sk04->dmg = 100;
	sklist->sk04->mdmg = 100;
	sklist->sk04->cost = 200;
	/* Sylvain */
		sklist->sk05->name = ft_strdup("Smoke bomb");
	sklist->sk05->desc = ft_strdup("See me ? Now you don't !");
	sklist->sk05->dmg = 0;
	sklist->sk05->mdmg = 50;
	sklist->sk05->cost = -20;
		sklist->sk06->name = ft_strdup("TIG");
	sklist->sk06->desc = ft_strdup("Sylvain caught his ennemy eating in the cluster, TIG");
	sklist->sk06->dmg = 45;
	sklist->sk06->mdmg = 0;
	sklist->sk06->cost = 0;
		sklist->sk07->name = ft_strdup("Backlash");
	sklist->sk07->desc = ft_strdup("A nasty attack in ennemy's back");
	sklist->sk07->dmg = 80;
	sklist->sk07->mdmg = 0;
	sklist->sk07->cost = 50;
		sklist->sk08->name = ft_strdup("Poisoned candies");
	sklist->sk08->desc = ft_strdup("Who want some candies ? :)");
	sklist->sk08->dmg = 100;
	sklist->sk08->mdmg = 250;
	sklist->sk08->cost = 320;
	/* Kwame */
		sklist->sk09->name = ft_strdup("O-shomen");
	sklist->sk09->desc = ft_strdup("Shineeeeeee");
	sklist->sk09->dmg = 70;
	sklist->sk09->mdmg = 0;
	sklist->sk09->cost = 100;
		sklist->sk10->name = ft_strdup("Hidari-kote");
	sklist->sk10->desc = ft_strdup("No arm, no chocolate");
	sklist->sk10->dmg = 25;
	sklist->sk10->mdmg = 5;
	sklist->sk10->cost = -20;
		sklist->sk11->name = ft_strdup("Migi-do");
	sklist->sk11->desc = ft_strdup("Spill the enemy's guts on the floor");
	sklist->sk11->dmg = 40;
	sklist->sk11->mdmg = 0;
	sklist->sk11->cost = 50;
		sklist->sk12->name = ft_strdup("Tsuki");
	sklist->sk12->desc = ft_strdup("What did you said ? I can't hear you");
	sklist->sk12->dmg = 200;
	sklist->sk12->mdmg = 100;
	sklist->sk12->cost = 350;
	/* Zaz */
		sklist->sk13->name = ft_strdup("Hair strangling!");
	sklist->sk13->desc = ft_strdup("Zaz strangle the enemy with his hairs");
	sklist->sk13->dmg = 900;
	sklist->sk13->mdmg = 0;
	sklist->sk13->cost = 750;
		sklist->sk14->name = ft_strdup("Zaz SMASH");
	sklist->sk14->desc = ft_strdup("Zaz turns green and tears his clothes appart");
	sklist->sk14->dmg = 45;
	sklist->sk14->mdmg = 0;
	sklist->sk14->cost = 0;
		sklist->sk15->name = ft_strdup("Slashinyourface");
	sklist->sk15->desc = ft_strdup("Zaz's lack of techniques can be overcome by pure power !");
	sklist->sk15->dmg = 80;
	sklist->sk15->mdmg = 0;
	sklist->sk15->cost = 60;
		sklist->sk16->name = ft_strdup("Stack dance");
	sklist->sk16->desc = ft_strdup("Wha...Why are y.. WTF ZAZ ?!");
	sklist->sk16->dmg = 0;
	sklist->sk16->mdmg = 0;
	sklist->sk16->cost = -50;
	/* Krp */
		sklist->sk17->name = ft_strdup("Brain tempest");
	sklist->sk17->desc = ft_strdup("Krp take his brain and throw it at his opponent's face");
	sklist->sk17->dmg = 350;
	sklist->sk17->mdmg = 50;
	sklist->sk17->cost = 350;
		sklist->sk18->name = ft_strdup("First aid (Self-Heal)");
	sklist->sk18->desc = ft_strdup("A mars and it starts again");
	sklist->sk18->dmg = 0;
	sklist->sk18->mdmg = 0;
	sklist->sk18->cost = -15;
		sklist->sk19->name = ft_strdup("Concentration strike");
	sklist->sk19->desc = ft_strdup("Wait, i'm warming up");
	sklist->sk19->dmg = 30;
	sklist->sk19->mdmg = 0;
	sklist->sk19->cost = 0;
		sklist->sk20->name = ft_strdup("Spear throw");
	sklist->sk20->desc = ft_strdup("FSHHHOOOooooooo ... OH MY GOD IT'S A WORLD RECORD !!");
	sklist->sk20->dmg = 40;
	sklist->sk20->mdmg = 0;
	sklist->sk20->cost = 60;
	/* Benny */
		sklist->sk21->name = ft_strdup("Poker Trick");
	sklist->sk21->desc = ft_strdup("oh man i'm in deep sh-BAAAM ROYAL FLUSH !");
	sklist->sk21->dmg = 45;
	sklist->sk21->mdmg = 45;
	sklist->sk21->cost = 0;
		sklist->sk22->name = ft_strdup("Popopopopopopopokerface");
	sklist->sk22->desc = ft_strdup("Benny looks at you in the eyes");
	sklist->sk22->dmg = 0;
	sklist->sk22->mdmg = 0;
	sklist->sk22->cost = -60;
		sklist->sk23->name = ft_strdup("Ace");
	sklist->sk23->desc = ft_strdup("This hit could kill 5 enemies on a battlefield");
	sklist->sk23->dmg = 150;
	sklist->sk23->mdmg = 175;
	sklist->sk23->cost = 300;
		sklist->sk24->name = ft_strdup("Bluff");
	sklist->sk24->desc = ft_strdup("Benny is now at full power... is he ?");
	sklist->sk24->dmg = 25;
	sklist->sk24->mdmg = 35;
	sklist->sk24->cost = -10;
	/* Ol */
		sklist->sk25->name = ft_strdup("Fire ball");
	sklist->sk25->desc = ft_strdup("It's me marHEMHEM, i meant, i'm a powerfull mage");
	sklist->sk25->dmg = 0;
	sklist->sk25->mdmg = 50;
	sklist->sk25->cost = 0;
		sklist->sk26->name = ft_strdup("Magic shield (Self-Heal)");
	sklist->sk26->desc = ft_strdup("Sorry can't hear you, this shield buzzes so much !");
	sklist->sk26->dmg = 0;
	sklist->sk26->mdmg = 0;
	sklist->sk26->cost = -15;
		sklist->sk27->name = ft_strdup("Pyro blast");
	sklist->sk27->desc = ft_strdup("Fire in the Ol !!");
	sklist->sk27->dmg = 100;
	sklist->sk27->mdmg = 200;
	sklist->sk27->cost = 250;
		sklist->sk28->name = ft_strdup("Fire sword");
	sklist->sk28->desc = ft_strdup("It glows in the dark !");
	sklist->sk28->dmg = 35;
	sklist->sk28->mdmg = 35;
	sklist->sk28->cost = 50;
	/* Beeone */
		sklist->sk29->name = ft_strdup("Lazer beam");
	sklist->sk29->desc = ft_strdup("I’M A’ FIRIN’ MAH LAZER!!");
	sklist->sk29->dmg = 0;
	sklist->sk29->mdmg = 450;
	sklist->sk29->cost = 500;
		sklist->sk30->name = ft_strdup("Mana concentration");
	sklist->sk30->desc = ft_strdup("I need mana");
	sklist->sk30->dmg = 0;
	sklist->sk30->mdmg = 0;
	sklist->sk30->cost = -50;
		sklist->sk31->name = ft_strdup("Fire ball");
	sklist->sk31->desc = ft_strdup("It's me marHEMHEM, i meant, i'm a powerfull mage");
	sklist->sk31->dmg = 0;
	sklist->sk31->mdmg = 50;
	sklist->sk31->cost = 0;
		sklist->sk32->name = ft_strdup("Air blast");
	sklist->sk32->desc = ft_strdup("A powerfull blast of wind hit the ennemy");
	sklist->sk32->dmg = 0;
	sklist->sk32->mdmg = 80;
	sklist->sk32->cost = 40;
	/* NS */
		sklist->sk33->name = ft_strdup("Shield slam");
	sklist->sk33->desc = ft_strdup("What is a better weapon? The sharp one your enemies expect, or the blunt one they ignore?");
	sklist->sk33->dmg = 30;
	sklist->sk33->mdmg = 30;
	sklist->sk33->cost = 0;
		sklist->sk34->name = ft_strdup("Shield block (Self-heal)");
	sklist->sk34->desc = ft_strdup("NS don't care, he has a shield.");
	sklist->sk34->dmg = 0;
	sklist->sk34->mdmg = 0;
	sklist->sk34->cost = -10;
		sklist->sk35->name = ft_strdup("Unleashed rage");
	sklist->sk35->desc = ft_strdup("Now it's my turn to hit you");
	sklist->sk35->dmg = 0;
	sklist->sk35->mdmg = 0;
	sklist->sk35->cost = 400;
		sklist->sk36->name = ft_strdup("English accent");
	sklist->sk36->desc = ft_strdup("Aie spike inglish so greyte zat i maik iour ire mailt");
	sklist->sk36->dmg = 25;
	sklist->sk36->mdmg = 25;
	sklist->sk36->cost = -20;
	/* RAINBOW DASH */
		sklist->sk37->name = ft_strdup("Concentrate");
	sklist->sk37->desc = ft_strdup("Prismal charge heating process.");
	sklist->sk37->dmg = 0;
	sklist->sk37->mdmg = 0;
	sklist->sk37->cost = -60;
		sklist->sk38->name = ft_strdup("Evocate");
	sklist->sk38->desc = ft_strdup("Cooldown system acceleration.");
	sklist->sk38->dmg = 0;
	sklist->sk38->mdmg = 0;
	sklist->sk38->cost = -60;
		sklist->sk39->name = ft_strdup("Duplicate");
	sklist->sk39->desc = ft_strdup("Seven colors of death.");
	sklist->sk39->dmg = 0;
	sklist->sk39->mdmg = 0;
	sklist->sk39->cost = -60;
		sklist->sk40->name = ft_strdup("Rainbow Dash");
	sklist->sk40->desc = ft_strdup("Now you die. Bitch.");
	sklist->sk40->dmg = 6666;
	sklist->sk40->mdmg = 6666;
	sklist->sk40->cost = 1000;
}
