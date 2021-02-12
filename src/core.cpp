// Auto-generated module | 2026-05-11T20:03:02.801261
#include <iostream>
#include <vector>

int compute_787() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_787() << std::endl;
    return 0;
}
