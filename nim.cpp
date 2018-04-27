#include <stdlib.h>
#include <stdio.h>


// Constantes
//
// #define MAX_JUGADA   3
// #define MIN_PALILLOS 5
//
// // Programa principal
//
// int main (void)
// {
//   int MaxJugada;
//     int NumPalillos;
//       int jugada;
//         int Y;
//
//           printf("\nEL JUEGO DE NIM\n\n");
//
//             do {
//                 printf ("N£mero de palillos (m¡nimo %d): ", MIN_PALILLOS);
//                     scanf("%d", &NumPalillos);
//                       } while (NumPalillos<MIN_PALILLOS);
//
//                         do {
//                             printf ("M xima jugada posible (1..%d): ", NumPalillos);
//                                 scanf("%d", &MaxJugada);
//                                   } while (MaxJugada<=1 || MaxJugada>=NumPalillos);
//
//                                     printf ("\nQuedan %d palillos en el mont¢n.\n",NumPalillos);
//
//                                       while (NumPalillos>1) {
//
//                                           do {
//                                                  printf("š Cu ntos palillos desea retirar del mont¢n (de 1 a %d)? ", MaxJugada);
//                                                         scanf("%d", &jugada);
//                                                             } while (jugada<=0 || jugada>MaxJugada);
//
//                                                                 NumPalillos -= jugada;
//
//
//                                                                     if (NumPalillos<1) {
//                                                                            printf ("\nJugada incorrecta, podr¡a haber ganado.\n");
//
//                                                                                } else if (NumPalillos==1) {
//
//                                                                                       printf ("\n­ Enhorabuena ! Ha ganado la partida.\n");
//
//                                                                                           }else {
//
//                                                                                                  /* ------------------------------------------------------------ */
//                                                                                                         /*  Estrategia seguida por el programa                          */
//                                                                                                                /* ------------------------------------------------------------ */
//
//                                                                                                                       jugada = NumPalillos%(MaxJugada+1);
//
//                                                                                                                              if (!jugada)
//                                                                                                                                        jugada = MaxJugada;
//                                                                                                                                               else if (jugada>1)
//                                                                                                                                                         jugada --;
//
//                                                                                                                                                                printf("Quedan %d palillos.\n",NumPalillos);
//
//                                                                                                                                                                       if (jugada>1)
//                                                                                                                                                                                 printf ("Yo retiro %d palillos.\n",jugada);
//                                                                                                                                                                                        else
//                                                                                                                                                                                                  printf ("Yo retiro un palillo.\n");
//
//                                                                                                                                                                                                         NumPalillos -= jugada;
//
//                                                                                                                                                                                                                if (NumPalillos==1) {
//                                                                                                                                                                                                                          printf ("\nLo siento, ha perdido esta partida.\n");
//                                                                                                                                                                                                                                 } else {
//                                                                                                                                                                                                                                           printf ("Por lo tanto, quedan %d palillos.\n",NumPalillos);
//                                                                                                                                                                                                                                                  }
//                                                                                                                                                                                                                                                      }
//                                                                                                                                                                                                                                                        }
//
//                                                                                                                                                                                                                                                          return 0;
//                                                                                                                                                                                                                                                          }
