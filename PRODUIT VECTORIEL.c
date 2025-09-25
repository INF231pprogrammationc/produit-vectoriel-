Conversation opened. 4 messages. 1 message unread.

Skip to content
Using Gmail with screen readers
Enable desktop notifications for Gmail.
   OK  No thanks
1 of 160
(no subject)
Inbox

Samira Kemgou
Attachments1:21 AM (5 hours ago)
 

Samira Kemgou
Attachments1:30 AM (5 hours ago)
Le jeu. 25 sept. 2025 à 01:21, Samira Kemgou <kemgousamira10@gmail.com> a écrit :

Samira Kemgou
Attachments1:43 AM (5 hours ago)
Le jeu. 25 sept. 2025 à 01:30, Samira Kemgou <kemgousamira10@gmail.com> a écrit : Le jeu. 25 sept. 2025 à 01:21, Samira Kemgou <kemgousamira10@gmail.com> a écri

Samira Kemgou <kemgousamira10@gmail.com>
Attachments
7:06 AM (1 minute ago)
to me

 One attachment
  •  Scanned by Gmail
#include<stdio.h>
void produitvectoriel(){
     int N;
     printf("entrez le nombre de ligne du vecteur");
     scanf("%d",&N);
     int v[N],u[N];
     int w[N];
     printf("entrez le premier vecteur");
     scanf("%d",&v[N]);
     printf("entrez le deuxième vecteur");
     scanf("%d",&u[N]);
     for(int i=0;i<N;i++)
     w[i]=u[i]*v[i+1]-u[i-1]*v[i];
     printf("le produit vectoriel:");
     for(int i=0;i<N;i++)
        printf("%d",w[i]);
        printf("\n");
}
int main(){
    produitvectoriel();
}
produit vectoriel.c
Displaying produit vectoriel.c.