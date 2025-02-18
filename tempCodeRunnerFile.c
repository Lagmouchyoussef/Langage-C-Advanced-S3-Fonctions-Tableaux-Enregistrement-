Liste* creer_produit() {
    Liste* p = (Liste*)malloc(sizeof(Liste)); // Allocation de mémoire correcte

    if (p != NULL) {
        p->cellule.Nom_produit = (char*)malloc(100 * sizeof(char));

        printf("Entrer le nom du produit : ");
        scanf("%s", p->cellule.Nom_produit);

        printf("Entrer la reference : ");
        scanf("%s", p->cellule.Reference);

        printf("Entrer le montant : ");
        scanf("%f", &p->cellule.Montant);

        printf("Entrer le jour d'achat : ");
        scanf("%s", p->cellule.DateAchat.jour);
        printf("Entrer le mois d'achat : ");
        scanf("%s", p->cellule.DateAchat.mois);
        printf("Entrer l'année d'achat : ");
        scanf("%s", p->cellule.DateAchat.annee);

        p->suiv = NULL;
    }

    return p;
}
