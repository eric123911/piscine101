int ft_putchar(char c);

void ft_putstr(char *str)
{
  while (*str)
    {
      ft_putchar(*str);
      str++;
    }
}

void print_argv(int argc, char **argv)
{
  int i;

  i = 1;
  while (i < argc)
    {
      ft_putstr(argv[i]);
      ft_putchar('\n');
      i++;
    }
}

int ft_strcmp(char *s1, char *s2)
{
  while (*s1 && s2 && *s1 == *s2)
    {
      s1++;
      s2++;
    }
  if (!*s1)
    return (0);
  return (*s1 - *s2);
}

int main(int argc, char **argv)
{
  int i;
  int j;
  char *temp;

  i = 1;
  j = 1;
  while (i < argc)
    {
      j = 1;
      while (j < argc - 1)
	{
	  if (cmp(argv[j], argv[j + 1]) > 0)
	    {
	      temp = argv[j];
	      argv[j] = argv[j + 1];
	      argv[j + 1] = temp;
	    }
	  j++;
	}
      i++;
    }
  print_argv(argc, argv);
  return (0);
}
