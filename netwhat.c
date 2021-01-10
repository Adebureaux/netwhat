#include <stdio.h>
#include <string.h>
#include <ctype.h>

void	tcp(void)
{
	printf("- TCP est plus courant que UDP\n");
	printf("- TCP est plus fiable que UDP\n");
	printf("- TCP garantie la livraison des donnees a la destination\n");
	printf("- TCP est un protocole oriente connexion\n");
	printf("- TCP ne prend pas en charge la diffusion\n");
	printf("- TCP fournit des mecanismes de verification d'erreur etendus\n");
	printf("- TCP organise le sequencage des donnees\n");
}

void	udp(void)
{
	printf("- UDP est plus rapide, plus simple et plus efficace que TCP\n");
	printf("- UDP ne dispose que du mecanisme de controle d'erreur de base\n");
	printf("- UDP est un protocole oriente datagramme\n");
	printf("- UDP prend en charge la diffusion\n");
	printf("- DHCP utilise UDP au niveau de la couche transport\n");
}

void	toupper_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac > 2)
	{
		printf("Error : Too Many Argument\n");
		return (1);
	}
	else if (ac < 2)
	{
		printf("Error : No Argument\n");
		return (1);
	}
	toupper_str(av[1]);
	if (!strcmp(av[1], "TCP"))
		tcp();
	else if (!strcmp(av[1], "UDP"))
		udp();
	else
		printf("Error : Argument not recognized\n");
	return (0);
}
