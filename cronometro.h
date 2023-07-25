#ifndef CRONOMETRO_H
#define CRONOMETRO_H

#ifndef CHRONO_H
#define CHRONO_H
#include <chrono>
#endif

using namespace std::chrono;

class Cronometro
{
private:
    high_resolution_clock::time_point tiempoInicial;
    high_resolution_clock::time_point tiempoFinal;
public:
    void start();
    void stop();
    double getSecondsElapsed();
};

#endif // CRONOMETRO_H
