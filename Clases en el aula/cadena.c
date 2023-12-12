int main(void)
{
  char cadena[50];
  printf("Ingrese una cadena: ");
  gets(cadena);

  for (int i = 0; i < strlen(cadena); i++) {
    char c = cadena[i];

    if (c >= 'A' && c <= 'Z') {
      cadena[i] = c + 'a' - 'A';
      return 1;
    } else if (c >= 'a' && c <= 'z') {
      cadena[i] = c;
      return 0;
    } else {
      cadena[i] = c;
      return -1;
    }
  }

  return 0;
}

