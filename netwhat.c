#include <stdio.h>
#include <string.h>
#include <ctype.h>

void	tcp(void)
{
	printf("- TCP ne prend pas en charge la diffusion\n");
	printf("- TCP est un protocole oriente connexion\n");
	printf("- TCP est comparativement plus lent que UDP\n");
	printf("- TCP est fiable car il garantit la livraison des donnees au routeur de la destination\n");
	printf("- TCP fournit des mecanismes de verification d'erreur etendus. C'est parce qu'il fournit le controle de flux et l'acquittement des donnees\n");
	printf("- TCP organise le sequencage des donnees, cela signifie que les paquets arrivent dans l'ordre dans le destinataire\n");
}

void	udp(void)
{
	printf("- UDP prend en charge la diffusion\n");
	printf("- UDP est un protocole oriente datagramme\n");
	printf("- UDP est plus rapide, plus simple et plus efficace que TCP\n");
	printf("- UDP prend en charge la diffusion\n");
	printf("- UDP ne dispose que du mecanisme de controle d'erreur de base\n");
}

void	dhcp(void)
{
	printf("- DHCP utilise le protocole UDP au niveau de la couche transport\n");
	printf("- DHCP automatise la configuration IP, y compris l'adresse IP, le masque de sous-reseau, la passerelle par defaut et les informations DNS\n");
	printf("- DHCP prend en charge les adresses IPv4 et IPv6\n");
}

void	osi(void)
{
	printf("- Modele OSI : Application - Presentation - Session - Transport - Reseau - Liaison - Physique\n");
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
	else if (!strcmp(av[1], "DHCP"))
		dhcp();
	else if (!strcmp(av[1], "OSI"))
		osi();
	else
		printf("Error : Argument not recognized\n");
	return (0);
}
