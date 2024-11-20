// M9Ships.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void manage_oxygen_system() {
    while (true) {
        cout << "Managing oxygen supply..." << endl;
        cout << "Oxygen levels stable." << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
}

void communication_system() {
    while (true) {
        cout << "Transmitting data to mothership..." << endl;
        cout << "Receiving data from mothership..." << endl;
        this_thread::sleep_for(chrono::seconds(2));
    }
}

void automatic_navigation() {
    while (true) {
        cout << "Calculating routes..." << endl;
        cout << "Avoiding obstacles..." << endl;
        this_thread::sleep_for(chrono::seconds(3));
    }
}

void monitor_vital_signs() {
    while (true) {
        cout << "Monitoring crew vital signs..." << endl;
        this_thread::sleep_for(chrono::seconds(4));
    }
}

void repair_systems() {
    while (true) {
        cout << "Inspecting and repairing systems..." << endl;
        this_thread::sleep_for(chrono::seconds(5));
    }
}

int main() {
    thread oxygen_task(manage_oxygen_system);
    thread communication_task(communication_system);
    thread navigation_task(automatic_navigation);
    thread vital_signs_task(monitor_vital_signs);
    thread repair_task(repair_systems);

    oxygen_task.join();
    communication_task.join();
    navigation_task.join();
    vital_signs_task.join();
    repair_task.join();

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
