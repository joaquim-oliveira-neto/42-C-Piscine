#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char	str1[10] = "";
	char	str2[10] = "";
	unsigned	int	i;

	printf("%d\n", strncmp(str1, str2, 0));
	printf("%d\n", ft_strncmp(str1, str2, 0));

	// asdf_asdf_4 => 0,
	// asde_asdf_4 => -1,
	// asdg_asdf_4 => 1,
	// asdf_asdf_3 => 0,
	// asde_asdf_3 => 0,
	// int		ret;
	// int		ret2;
	// int		ret3;
	// int		ret4;
	// int		ret5;
	// int		ret6;

	// char	str1[10] = "";
	// char	str2[10] = "";

	// ret = ft_strncmp(str1, str2, 0);

	// printf("MY str1: %s\n", str1);
	// printf("MY str2: %s\n", str2);
	// printf("MY RET: %d\n", ret);
	// printf("=======\n");

	// ret2 = strncmp(str1, str2, 3);

	// printf("STRSTR str1: %s\n", str1);
	// printf("STRSTR str2: %s\n", str2);
	// printf("STRSTR RET: %d\n\n", ret2);
	// printf("**********\n\n");

	// /////////////////////////////////////

	// char	str3[10] = "asde";
	// char	str4[10] = "asdf";

	// ret3 = ft_strncmp(str3, str4, 3);

	// printf("MY str3: %s\n", str3);
	// printf("MY str4: %s\n", str4);
	// printf("MY RET: %d\n", ret3);
	// printf("=======\n");

	// ret4 = strncmp(str3, str4, 3);

	// printf("STRSTR str3: %s\n", str3);
	// printf("STRSTR str4: %s\n", str4);
	// printf("STRSTR RET: %d\n\n", ret4);
	// printf("**********\n\n");

	// /////////////////////////////////////

	// char	str5[10] = "asdg";
	// char	str6[10] = "asdf";

	// ret5 = ft_strncmp(str5, str6, 4);

	// printf("MY str5: %s\n", str5);
	// printf("MY str6: %s\n", str6);
	// printf("MY RET: %d\n", ret5);
	// printf("=======\n");

	// ret6 = strncmp(str5, str6, 4);

	// printf("STRSTR str5: %s\n", str5);
	// printf("STRSTR str6: %s\n", str6);
	// printf("STRSTR RET: %d\n\n", ret6);
	// printf("**********\n\n");

	return (0);
}
