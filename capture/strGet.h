#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief vacia el stdin de manera manual
 * 
 * @author luis Eduardo Galindo Amaya
 */
void flushStdinBuffer()
{
  // descarta el ultimo '\n' en stdin
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;
}

/**
 * @brief Capturar string
 * @author Luis Eduardo Galindo Amaya
 * @param str apuntador a un array de chars
 * @param lenght
 */
void strGet(char *str, int max_lenght)
{
  // captura el string
  fgets(str, max_lenght, stdin);

  // reemplaza el ultimo caracter con el terminador
  char *p;
  if ((p = strchr(str, '\n')) != NULL)
    *p = '\0';
}

/**
 * @brief Validar si un caracter es alfabetico
 */
char isAlphabetic(unsigned int ch)
{
  ch = ch | 32; // convierte 'ch' en minuscula
  return ch >= 'a' && ch <= 'z';
}

/**
 * @brief Convertir mayuscula a minuscula
 * @param str puntero a array de chars
 * @author Luis Eduardo Galindo Amaya
 */
void strUpper(char *str)
{
  for (char *i = str; *i; i++)
  {
    if (isAlphabetic(*i))
      *i &= ~32;
  }
}

/**
 * @brief Convierte los caracteres de un string a minuscula
 * @param str puntero a un string
 * @author Luis Eduardo Galindo Amaya
 */
void strLower(char *str)
{
  for (char *i = str; *i; i++)
  {
    if (isAlphabetic(*i))
      *i |= 32;
  }
}
