#include <stdio.h>

int		ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
char*	ft_strcpy(char *dest, char *src);
char*	ft_strncpy(char *dest, char *src, unsigned int n);
char*	ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char*	ft_strupcase(char *str);
char*	ft_lowercase(char *str);
char*	ft_strcapitalize(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *stir);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, int nb);

int main(void)
{
	printf("***------------------------------***\n");
	printf("**          EXERCISE 00           **\n");
	printf("***------------------------------***\n");
	char *s2;
	char *s1;
	char *s3;

	s1 = "Hello World!";
	s2 = "";
	s3 = "42";
	printf("Should output: \'Hello World!\'\n");
	ft_putstr(s1);
	ft_putchar('\n');
	printf("Should output: \'\'\n");
	ft_putstr(s2);
	ft_putchar('\n');
	printf("Should output: \'42\'\n");
	ft_putstr(s3);

	printf("***------------------------------***\n");
	printf("**          EXERCISE 01           **\n");
	printf("***------------------------------***\n");
	printf("Should output: \'42\'\n");
	ft_putnbr(42);
	printf("\n");
	printf("Should output: \'-42\'\n");
	ft_putnbr(-42);
	printf("\n");
	printf("Should output: \'-2147483646\'\n");
	ft_putnbr(-2147483646);
	printf("\n");
	printf("Should output: \'2147483647\'\n");
	ft_putnbr(2147483647);
	printf("\n%d", -2147483647);

	printf("***------------------------------***\n");
	printf("**          EXERCISE 02           **\n");
	printf("***------------------------------***\n");
	char *num;

	num = "-1233346";
	printf("Should output: \'-1233346\'\n");
	printf("%d\n", ft_atoi(num));
	printf("Should output: \'34214\'\n");
	printf("%d\n", ft_atoi("34214"));
	printf("Should output: \'12\'\n");
	printf("%d\n", ft_atoi("12Three45678"));
	printf("Should output: \'\'\n");
	printf("%d\n", ft_atoi("Hello World!"));
	printf("Should output: \'42\'\n");
	printf("%d\n", ft_atoi("+42"));
	printf("Should output: \'-42\'\n");
	printf("%d\n", ft_atoi("-42"));
	printf("Should output: \'42\'\n");
	printf("%d\n", ft_atoi("	+42"));
	printf("Should output: \'42\'\n");
	printf("%d\n", ft_atoi("\t\n\v\f\r 42"));
	printf("Should output: \'\'\n");
	printf("%d\n", ft_atoi("--42"));

	printf("***------------------------------***\n");
	printf("**          EXERCISE 03           **\n");
	printf("***------------------------------***\n");
	char src[] = "Hello world!";
	char dest[] = "Temp string";
	
	printf("Dest is currently: %s\n", dest);
	printf("Both should output: \'Hello world!\'\n");
	printf("ft_strcpy return: %s\n", ft_strcpy(dest, src));
	printf("Dest: %s\n", dest);

	printf("***------------------------------***\n");
	printf("**          EXERCISE 04           **\n");
	printf("***------------------------------***\n");
	char src2[] = "Hello world!";
	char dest2[] = "How are you doing today?";
	
	printf("Dest is currently: %s\n", dest2);
	printf("Both should output: \'Hello\'\n");
	printf("ft_strcpy return: %s\n", ft_strncpy(dest, src, 5));
	printf("Dest: %s\n", dest);

	printf("***------------------------------***\n");
	printf("**          EXERCISE 05           **\n");
	printf("***------------------------------***\n");
	char str[] = "Hello world!";
	char to_find[] = "wor";
	
	printf("Should output: \'world!\'\n");
	printf("%s\n", ft_strstr(str, to_find));

	printf("***------------------------------***\n");
	printf("**          EXERCISE 06           **\n");
	printf("***------------------------------***\n");
	char str1[] = "Hello world!";
	char str2[] = "Hella";
	char str3[] = "aaaaaa";
	char str4[] = "bbbbbbbbbb";
	char str5[] = "Star Wars";
	char str6[] = "Star Wars";
	
	printf("Should output: \'1\'\n");
	printf("%d\n", ft_strcmp(str1, str2));
	printf("Should output: \'-1\'\n");
	printf("%d\n", ft_strcmp(str3, str4));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_strcmp(str5, str6));

	printf("***------------------------------***\n");
	printf("**          EXERCISE 07           **\n");
	printf("***------------------------------***\n");
	char str7[] = "Hello world!";
	char str8[] = "Hella";
	char str9[] = "aaaaaa";
	char str10[] = "bbbbbbbbbb";
	char str11[] = "Star Wars";
	char str12[] = "Star Wars";
	
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_strncmp(str7, str8, 3));
	printf("Should output: \'-1\'\n");
	printf("%d\n", ft_strncmp(str7, str8, 6));
	printf("Should output: \'-1\'\n");
	printf("%d\n", ft_strncmp(str9, str10, 2));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_strncmp(str11, str12, 4));

	printf("***------------------------------***\n");
	printf("**          EXERCISE 08           **\n");
	printf("***------------------------------***\n");
	char str13[] = "hello world";
	char str14[] = "hEllO woRld";
	char str15[] = "h3ll0 wor1d";
	char str16[] = "h$ll* w@rld";

	printf("Should output: \'HELLO WORLD\'\n");
	printf("%s\n", ft_strupcase(str13));
	printf("Should output: \'HELLO WORLD\'\n");
	printf("%s\n", ft_strupcase(str14));
	printf("Should output: \'H3LL0 WOR1D\'\n");
	printf("%s\n", ft_strupcase(str15));
	printf("Should output: \'H$LL* W@RLD\'\n");
	printf("%s\n", ft_strupcase(str16));

	printf("***------------------------------***\n");
	printf("**          EXERCISE 09           **\n");
	printf("***------------------------------***\n");
	char str17[] = "HELLO WORLD";
	char str18[] = "HeLLo WOrLD";
	char str19[] = "H3LL0 WOR1D";
	char str20[] = "H$LL* W@RLD";

	printf("Should output: \'hello world\'\n");
	printf("%s\n", ft_strupcase(str17));
	printf("Should output: \'hello world\'\n");
	printf("%s\n", ft_strupcase(str18));
	printf("Should output: \'h3ll0 wor1d\'\n");
	printf("%s\n", ft_strupcase(str19));
	printf("Should output: \'h$ll* w@rld\'\n");
	printf("%s\n", ft_strupcase(str20));

	printf("***------------------------------***\n");
	printf("**          EXERCISE 10           **\n");
	printf("***------------------------------***\n");
	char str21[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str22[] = "heLLo thEre Beautiful world! How+are+yOu";

	printf("Should output: \'Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\'\n");
	printf("%s\n", ft_strcapitalize(str21));
	printf("Should output: \'Hello There Beautiful World! How+Are+You\'\n");
	printf("%s\n", ft_strcapitalize(str22));

	printf("***------------------------------***\n");
	printf("**          EXERCISE 11           **\n");
	printf("***------------------------------***\n");
	char str23[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str24[] = "abchasdiufhkjn46346AKLJBILUHSFLBIH";
	char str25[] = "45345sfaggaergdaDSGSadgada";
	char str26[] = "sgfsfghseKJHILUHGGHGHJBSDJFjkh6774";
	char str27[] = "jkhasdgkljHKLJHJH*$#@*&@#^";
	char str28[] = "";

	printf("Should output: \'1\'\n");
	printf("%d\n", ft_str_is_alpha(str23));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_alpha(str24));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_alpha(str25));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_alpha(str26));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_alpha(str27));
	printf("Should output: \'1\'\n");
	printf("%d\n", ft_str_is_alpha(str28));

	printf("***------------------------------***\n");
	printf("**          EXERCISE 12           **\n");
	printf("***------------------------------***\n");
	char str29[] = "0123456789";
	char str30[] = "ab012345";
	char str31[] = "78347457890bn";
	char str32[] = "435908r452";
	char str33[] = "25&082*80";
	char str34[] = "";

	printf("Should output: \'1\'\n");
	printf("%d\n", ft_str_is_numeric(str29));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_numeric(str30));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_numeric(str31));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_numeric(str32));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_numeric(str33));
	printf("Should output: \'1\'\n");
	printf("%d\n", ft_str_is_numeric(str34));

	printf("***------------------------------***\n");
	printf("**          EXERCISE 13           **\n");
	printf("***------------------------------***\n");
	char str35[] = "abcdefghijklmnopqrstuvwxyz";
	char str36[] = "abchasdiFGDSfsghfgs";
	char str37[] = "546sgrjknakgnln453iaerg53";
	char str38[] = "sgfsfghseKJHILUHGGHGHJBSDJFjkh67";
	char str39[] = "jkhasdgklj^HKLJHJH*$#@";
	char str40[] = "";

	printf("Should output: \'1\'\n");
	printf("%d\n", ft_str_is_lowercase(str35));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_lowercase(str36));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_lowercase(str37));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_lowercase(str38));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_lowercase(str39));
	printf("Should output: \'1\'\n");
	printf("%d\n", ft_str_is_lowercase(str40));

	printf("***------------------------------***\n");
	printf("**          EXERCISE 14           **\n");
	printf("***------------------------------***\n");
	char str41[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str42[] = "TEGSDGdegagRGDH";
	char str43[] = "DGDSGSGR67DGG";
	char str44[] = "HDSEGG*$KJNFDSKJLH";
	char str45[] = "FSDE";
	char str46[] = "";

	printf("Should output: \'1\'\n");
	printf("%d\n", ft_str_is_uppercase(str41));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_uppercase(str42));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_uppercase(str43));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_uppercase(str44));
	printf("Should output: \'1\'\n");
	printf("%d\n", ft_str_is_uppercase(str45));
	printf("Should output: \'1\'\n");
	printf("%d\n", ft_str_is_uppercase(str46));

	printf("***------------------------------***\n");
	printf("**          EXERCISE 15           **\n");
	printf("***------------------------------***\n");
	char str47[] = "(*#%&*( jkhfLKJHSFKBJ~";
	char str48[] = "\r\b\t\v";
	char str49[] = "sdg&*DGDSGS\bR67DGG&*";
	char str50[] = "*&^*&(JHBSDJFBSDFJHBDSFJHljhdsfjhbas*&Y&*GUKH";
	char str51[] = "lkjsaf\fEWR&";
	char str52[] = "";

	printf("Should output: \'1\'\n");
	printf("%d\n", ft_str_is_printable(str47));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_printable(str48));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_printable(str49));
	printf("Should output: \'1\'\n");
	printf("%d\n", ft_str_is_printable(str50));
	printf("Should output: \'0\'\n");
	printf("%d\n", ft_str_is_printable(str51));
	printf("Should output: \'1\'\n");
	printf("%d\n", ft_str_is_printable(str52));

	printf("***------------------------------***\n");
	printf("**          EXERCISE 16           **\n");
	printf("***------------------------------***\n");
	char str53[] = "Hello ";
	char str54[] = "world!";

	printf("Should output: \'Hello world!\'\n");
	printf("%s\n", ft_strcat(str53, str54));

	printf("***------------------------------***\n");
	printf("**          EXERCISE 17           **\n");
	printf("***------------------------------***\n");
	char str55[] = "Hello ";
	char str56[] = "world!";

	printf("Should output: \'Hello wor\'\n");
	printf("%s\n", ft_strncat(str55, str56, 3));
	return (0);
}
