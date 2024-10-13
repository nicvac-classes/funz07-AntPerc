#include <iostream>
using namespace std;

int main() {
    double x, v;
    string operazione;

    v = 0;
    do {
        operazione = leggiOperazione();
        if (operazione != "R" && operazione != "X") {
            cout << "inserisci x" << endl;
            cin >> x;
        }
        if (operazione == "+") {
            v = somma(v, x);
        }
        if (operazione == "-") {
            v = sottrazione(v, x);
        }
        if (operazione == "/") {
            v = divisione(v, x);
        }
        if (operazione == "*") {
            v = moltiplicazione(v, x);
        }
        if (operazione == "R") {
            v = 0;
        }
        cout << "Il valore del numero è: " << v << endl;
    } while (operazione != "X");
    return 0;
}

double divisione(double dividendo, double divisore) {
    double dv;

    dv = dividendo / divisore;
    
    return dv;
}

string leggiOperazione() {
    string op;

    do {
        cout << "Inserisci l'operazione da fare (+,-,/,*) oppure se resettare il valore corrente a 0 o uscire dal programma" << endl;
        cin >> op;
    } while (op != "+" && op != "-" && op != "/" && op != "*" && op != "R" && op != "X");
    
    return op;
}

double moltiplica(double fattore1, double fattore2) {
    double ml;

    ml = fattore1 * fattore2;
    
    return ml;
}

double somma(double addendo1, double addendo2) {
    double sm;

    sm = addendo1 + addendo2;
    
    return sm;
}

double sottrazione(double minuendo, double sottraendo) {
    double st;

    st = minuendo - sottraendo;
    
    return st;
}

