#include <iostream>

using namespace std;

int main()
{
    int decision;
    do {
        const int D = 3;
        int choix;
        string message;

        cout << "Entrez le numéro de l'opération que vous souhaitez effectuer. \n 1. Crypter le message. \n 2. Decrypter le message." << endl;
        cin >> choix;

        while (choix != 1 && choix != 2) {
            cout << "Vous devez choisir entre 1 et 2. \n Entrez le numero de l'opération que vous souhaitez effectuer. \n 1. Crypter le message. \n 2. Décrypter le message." << endl;
            cin >> choix;
        }

        cin.ignore();
        string messageEnvoye = "";
        if (choix == 1) {
            cout << "Entrez le message à crypter." << endl;
            getline(cin, message);
            for (char caractere : message) {
                if(caractere >= 'A' && caractere <= 'Z' || caractere >= 'a' && caractere <= 'z') {
                    caractere = caractere + D;
                    (caractere > 'Z' && caractere < 'a' || caractere > 'z') ? caractere = caractere - 26 : caractere = caractere;
                    messageEnvoye = messageEnvoye + caractere;
                }
            }
            cout << "Le message crypte est : " << messageEnvoye << "\n" << endl;
        } else {
            cout << "Entrez le message à decrypter." << endl;
            getline(cin, message);
            for (char caractere : message) {
                if(caractere >= 'A' && caractere <= 'Z' || caractere >= 'a' && caractere <= 'z') {
                    caractere = caractere - D;
                    (caractere < 'A' || caractere > 'Z' && caractere < 'a') ? caractere = caractere + 26 : caractere = caractere;
                    messageEnvoye = messageEnvoye + caractere;
                }
            }
            cout << "Le message décrypte est : " << messageEnvoye << "\n" << endl;
        }

        cout << "Choisissez 1 si vous voulez quitter le programme et un autre chiffre (différent de 1) si vous crypter ou decrypter un autre message. \n 1. Quitter \n 2. Continuer" << endl;
        cin >> decision;
    } while (decision != 1);

    return 0;
}


