#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <wait.h>

#include <ctime>
#include <iostream>
using namespace std;

#define ALTURA 20
#define LARGURA 20

void MoveEsquerda(int *x);
void MoveDireita(int *x);
void MoveCima(int *y);
void MoveBaixo(int *y);
void ImprimeMapa(int px, int py);
void LimiteTabuleiro(int *px, int *py);
void MoveAteComida(int *x, int *y);
int MenorDistanciaEucliana(int px, int py, int x, int y);

char movimento;
bool deveMostrarCifrao = false;
int comidaX, comidaY;

int main() {
    int px, py;
    char ordem;
    int continua = 1;

    srand(time(0));

    while (continua) {
        // cin >> ordem;
        // cin.ignore();
        px = rand() % LARGURA;
        py = rand() % ALTURA;

        comidaX = rand() % LARGURA;
        comidaY = rand() % ALTURA;

        ImprimeMapa(px, py);

        switch (ordem) {
            case 'a':
            case 'A':
                MoveEsquerda(&px);
                movimento = 'a';
                break;
            case 'd':
            case 'D':
                MoveDireita(&px);
                movimento = 'd';
                break;
            case 'w':
            case 'W':
                MoveCima(&py);
                movimento = 'w';
                break;
            case 's':
            case 'S':
                MoveBaixo(&py);
                movimento = 's';
                break;
            case 'm':
            case 'M':
                deveMostrarCifrao = !deveMostrarCifrao;
                break;
            case 'q':
            case 'Q':
                continua = 0;
                break;
        }

        // LimiteTabuleiro(&px, &py);
        // ImprimeMapa(px, py);
        MoveAteComida(&px, &py);

        cout << "Ordem: " << ordem << endl
             << "Px: " << px << ", Py: " << py << endl;
    }

    return 0;
}

void ImprimeMapa(int px, int py) {
    int x, y;
    for (y = 0; y < ALTURA; y++) {
        for (x = 0; x < LARGURA; x++) {
            if (px == x && py == y) {
                if (deveMostrarCifrao)
                    cout << " $ ";
                else
                    cout << " @ ";
            } else if (comidaX == x && comidaY == y) {
                cout << " # ";
            } else {
                cout << " + ";
            }
        }
        cout << endl;
    }
}

void LimiteTabuleiro(int *px, int *py) {
    if (*px < 0 || *px >= LARGURA || *py < 0 || *py >= ALTURA) {
        cout << "Você saiu do tabuleiro, voltando para a posição anterior."
             << endl;

        switch (movimento) {
            case 'a':
                MoveDireita(px);
                break;
            case 'd':
                MoveEsquerda(px);
                break;
            case 'w':
                MoveBaixo(py);
                break;
            case 's':
                MoveCima(py);
                break;
        }
    }
}

void MoveEsquerda(int *x) { *x = *x - 1; }

void MoveDireita(int *x) { *x = *x + 1; }

void MoveCima(int *y) { *y = *y - 1; }

void MoveBaixo(int *y) { *y = *y + 1; }

void MoveAteComida(int *x, int *y) {
    int distancia = MenorDistanciaEucliana(*x, *y, comidaX, comidaY);

    cout << "A menor distância euclidiana é " << distancia << endl << endl;

    int passo = 1;
    while (*x != comidaX || *y != comidaY) {
        bool jaMoveu = false;

        if (*y > comidaY) {
            MoveCima(y);
            jaMoveu = true;
        } else if (*y < comidaY) {
            MoveBaixo(y);
            jaMoveu = true;
        }

        if (*x > comidaX && !jaMoveu) {
            MoveEsquerda(x);
        } else if (*x < comidaX && !jaMoveu) {
            MoveDireita(x);
        }

        cout << "Passo: " << passo++ << endl;
        ImprimeMapa(*x, *y);
        cout << "X: " << *x << " " << "Y: " << *y << endl;
        cout << endl;
        sleep(1);
    }

    cout << "Chegou até o fim" << endl;
}

int MenorDistanciaEucliana(int px, int py, int x, int y) {
    return sqrt(pow(px - x, 2) + pow(py - y, 2));
}
