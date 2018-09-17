/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@1337.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 04:23:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/12 08:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);

void	ft_print_list(t_list *mylist)
{
	if (mylist)
	{
		ft_print_list(mylist->next);
		printf("%s\n", (char *)mylist->data);
	}
}

int		main(void)
{
	t_list	*mylist;
	char	*start;

	start = "\nA  Il faut bien commencer quelque part ... ";
	mylist = ft_create_elem(start);
	ft_list_push_back(&mylist, "B  listable : qui peut être listé ");
	ft_list_push_back(&mylist, "C  listacé : élément d\'une liste");
	ft_list_push_back(&mylist, "D  listard : habitué des listes. le student 1337 fraichement débarqué sera vite confronté aux vieux listards");
	ft_list_push_back(&mylist, "E  listaline de Pascal (la) : ancêtre d\'Echobot qui n\'a jamais fonctionné.");
	ft_list_push_back(&mylist, "F  listanisme : adoration des listes");
	ft_list_push_back(&mylist, "J  listateur : professionnel de la liste");
	ft_list_push_back(&mylist, "K  listerie : lieu où l'on trouve des listes imaginez la vogsphère de 1337");
	ft_list_push_back(&mylist, "L  listériose : n.f. maladie transmise par le bacille Listeria découvert à 1337");
	ft_list_push_back(&mylist, "M  listateur : professionnel de la liste");
	ft_list_push_back(&mylist, "N  listette : petite liste (affectueux), petite liste d\'exercices sympas promptes au copier/coller");
	ft_list_push_back(&mylist, "P  listibule : ... (tiens ! c\'est quoi ce bidule !?");
	ft_list_push_back(&mylist, "Q  listide : batiment où l\'on fait des listes comme l\'école 1337");
	ft_list_push_back(&mylist, "R  listiphobe : qui a peur des listes");
	ft_list_push_back(&mylist, "S  listifuge : qui éloigne les listes");
	ft_list_push_back(&mylist, "T  listin : Petits personnages vivant au pays des listes. y\'en a pas mal à 1337");
	ft_list_push_back(&mylist, "U  listitoire : instrument destiné à égoutter les listes fraiches");
	ft_list_push_back(&mylist, "V  listodrome : ou listathon concours de rapidité d\'exécution de fonctions listes");
	ft_list_push_back(&mylist, "W  listogène : student 1337 abusant des listes");
	ft_list_push_back(&mylist, "X  listoglotte : qui ne s\'exprime que par listes");
	ft_list_push_back(&mylist, "Y  LISTOL : programme informatique destiné à produire les listes d\'employés à licencier");
	ft_list_push_back(&mylist, "Z  listomane : amoureux à l\'excès des listes.");
	ft_list_push_back(&mylist, "AA listomance : liste des ex");
	ft_list_push_back(&mylist, "AB listomaniaque : atteint de listomanie");
	ft_list_push_back(&mylist, "AC listomanie : affection de celui qui ne peut s\'empêcher de faire des listes");
	ft_list_push_back(&mylist, "AD listoplagie : art chirurgical de réparation des listes malformées, par extension plagiat de code");
	ft_list_push_back(&mylist, "AE listance - fièvre créatrice de listes");
	ft_list_push_back(&mylist, "AF listal : qui à le caractère d\'une liste ");
	ft_list_push_back(&mylist, "AG listagie : pathologie grave");
	ft_list_push_back(&mylist, "AH listaddict ... comme ça se prononce");
	ft_list_push_back(&mylist, "AI listacilline : antibiotique de la classe des pénicillines de synthèse\n");
	ft_print_list(mylist);
	return (0);
}
