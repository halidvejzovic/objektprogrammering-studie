
#include <iostream>
using namespace std;

int main() {
    int svar;
    int poang = 0;

    cout << "====================================\n";
    cout << "       QUIZ: PROGRAMMERINGSPARADIGM\n";
    cout << "====================================\n\n";

    // FRAGA 1
    cout << "1. Vad ar ett programmeringsparadigm?\n";
    cout << "1. Ett satt att tanka och arbeta med programmering\n";
    cout << "2. Ett programmeringsfel\n";
    cout << "3. En typ av dator\n";
    cout << "4. Ett programmeringssprak\n";
    cout << "Ditt svar: ";
    cin >> svar;

    if (svar == 1) {
        cout << "Ratt!\n\n";
        poang++;
    } else {
        cout << "Fel! Ratt svar ar 1.\n\n";
    }

    // FRAGA 2
    cout << "2. Vad beskriver ett paradigm?\n";
    cout << "1. Hur snabb datorn ar\n";
    cout << "2. Hur kod skrivs och fungerar\n";
    cout << "3. Hur man installerar program\n";
    cout << "4. Hur internet fungerar\n";
    cout << "Ditt svar: ";
    cin >> svar;

    if (svar == 2) {
        cout << "Ratt!\n\n";
        poang++;
    } else {
        cout << "Fel! Ratt svar ar 2.\n\n";
    }

    // FRAGA 3
    cout << "3. Vilka ar de tva vanligaste indelningarna?\n";
    cout << "1. HTML och CSS\n";
    cout << "2. C++ och C#\n";
    cout << "3. Imperativ och deklarativ programmering\n";
    cout << "4. Frontend och backend\n";
    cout << "Ditt svar: ";
    cin >> svar;

    if (svar == 3) {
        cout << "Ratt!\n\n";
        poang++;
    } else {
        cout << "Fel! Ratt svar ar 3.\n\n";
    }

    // FRAGA 4
    cout << "4. Vad innebar imperativ programmering?\n";
    cout << "1. Man berattar vad man vill uppna\n";
    cout << "2. Man ger datorn instruktioner steg for steg\n";
    cout << "3. Man skriver bara kommentarer\n";
    cout << "4. Man anvander inga variabler\n";
    cout << "Ditt svar: ";
    cin >> svar;

    if (svar == 2) {
        cout << "Ratt!\n\n";
        poang++;
    } else {
        cout << "Fel! Ratt svar ar 2.\n\n";
    }

    // FRAGA 5
    cout << "5. Vad fokuserar imperativ programmering pa?\n";
    cout << "1. HUR datorn ska utföra en uppgift\n";
    cout << "2. Vilken dator som anvands\n";
    cout << "3. Vilket resultat man vill ha utan instruktioner\n";
    cout << "4. Hur programmet ska se ut\n";
    cout << "Ditt svar: ";
    cin >> svar;

    if (svar == 1) {
        cout << "Ratt!\n\n";
        poang++;
    } else {
        cout << "Fel! Ratt svar ar 1.\n\n";
    }

    // FRAGA 6
    cout << "6. Vilket av dessa ar ett exempel pa imperativ kod?\n";
    cout << "1. SELECT * FROM Kunder;\n";
    cout << "2. Ge datorn instruktioner i flera steg med C++\n";
    cout << "3. HTML-rubriker\n";
    cout << "4. En SQL-fraga\n";
    cout << "Ditt svar: ";
    cin >> svar;

    if (svar == 2) {
        cout << "Ratt!\n\n";
        poang++;
    } else {
        cout << "Fel! Ratt svar ar 2.\n\n";
    }

    // FRAGA 7
    cout << "7. Vad innebar deklarativ programmering?\n";
    cout << "1. Man beskriver varje steg\n";
    cout << "2. Man berattar VAD man vill uppna\n";
    cout << "3. Man skriver instruktioner till tangentbordet\n";
    cout << "4. Man maste anvanda C++\n";
    cout << "Ditt svar: ";
    cin >> svar;

    if (svar == 2) {
        cout << "Ratt!\n\n";
        poang++;
    } else {
        cout << "Fel! Ratt svar ar 2.\n\n";
    }

    // FRAGA 8
    cout << "8. Vad fokuserar deklarativ programmering pa?\n";
    cout << "1. HUR varje steg ska goras\n";
    cout << "2. Vilken dator som anvands\n";
    cout << "3. VILKET resultat man vill uppna\n";
    cout << "4. Hur snabbt programmet startar\n";
    cout << "Ditt svar: ";
    cin >> svar;

    if (svar == 3) {
        cout << "Ratt!\n\n";
        poang++;
    } else {
        cout << "Fel! Ratt svar ar 3.\n\n";
    }

    // FRAGA 9
    cout << "9. Vilket ar ett exempel pa deklarativ programmering?\n";
    cout << "1. En C++-loop\n";
    cout << "2. En serie instruktioner i C#\n";
    cout << "3. En SQL-fraga\n";
    cout << "4. En if-sats\n";
    cout << "Ditt svar: ";
    cin >> svar;

    if (svar == 3) {
        cout << "Ratt!\n\n";
        poang++;
    } else {
        cout << "Fel! Ratt svar ar 3.\n\n";
    }

    // FRAGA 10
    cout << "10. Vad betyder SELECT i SQL?\n";
    cout << "1. Ta bort information\n";
    cout << "2. Hamta information\n";
    cout << "3. Skapa en ny dator\n";
    cout << "4. Stanga databasen\n";
    cout << "Ditt svar: ";
    cin >> svar;

    if (svar == 2) {
        cout << "Ratt!\n\n";
        poang++;
    } else {
        cout << "Fel! Ratt svar ar 2.\n\n";
    }

    // FRAGA 11
    cout << "11. Vad betyder * i SELECT * FROM Kunder?\n";
    cout << "1. Bara den forsta kolumnen\n";
    cout << "2. Alla kolumner\n";
    cout << "3. Ta bort alla kunder\n";
    cout << "4. Skapa en ny tabell\n";
    cout << "Ditt svar: ";
    cin >> svar;

    if (svar == 2) {
        cout << "Ratt!\n\n";
        poang++;
    } else {
        cout << "Fel! Ratt svar ar 2.\n\n";
    }

    // FRAGA 12
    cout << "12. Kan ett programmeringssprak stodja flera paradigm?\n";
    cout << "1. Nej, aldrig\n";
    cout << "2. Bara om det ar C++\n";
    cout << "3. Ja, moderna sprak kan stodja flera olika stilar\n";
    cout << "4. Bara om det ar SQL\n";
    cout << "Ditt svar: ";
    cin >> svar;

    if (svar == 3) {
        cout << "Ratt!\n\n";
        poang++;
    } else {
        cout << "Fel! Ratt svar ar 3.\n\n";
    }

    // RESULTAT
    cout << "====================================\n";
    cout << "             DITT RESULTAT\n";
    cout << "====================================\n";

    cout << "Du fick " << poang << " av 12 ratt!\n";

    if (poang == 12) {
        cout << "Fantastiskt! Alla ratt!\n";
    } else if (poang >= 9) {
        cout << "Mycket bra jobbat!\n";
    } else if (poang >= 6) {
        cout << "Bra jobbat! Fortsatt ovningen!\n";
    } else {
        cout << "Las igenom texten och forsok igen!\n";
    }

    return 0;
}
