// Auto-generated module | 2026-05-13T20:33:53.042335
#include <iostream>
#include <vector>

int compute_433() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_433() << std::endl;
    return 0;
}
