/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:10:05 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/03/11 00:29:10 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		addlen;
	size_t		dlen;

	d = dst;
	s = src;
	addlen = dstsize;
	while (addlen-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	addlen = dstsize - dlen;
	if (addlen == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (addlen != 1)
		{
			*d++ = *s;
			addlen--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}

//int	main(void)
//{
//	// あれっターミナルの検証がうまくいってなかったの、printfの書式とかが原因か。。。？
//	char			str1[] = "AAAAAAAAAA";
//	const char			str2[] = "BBB";

//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("ret = %zu\n", ft_strlcat(str1, str2, sizeof(str1)));
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("-------------\n");

//	char			str3[] = "AAAAAAAAAA";
//	char			str4[] = "BBB";
//	printf("%s\n", str3);
//	printf("%s\n", str4);
//	printf("ret = %zu\n", strlcat(str3, str4, sizeof(str3)));
//	printf("%s\n", str3);
//	printf("%s\n", str4);
//	return (0);
//}
