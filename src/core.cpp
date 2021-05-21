// Auto-generated module | 2026-05-12T20:46:32.986453
#include <iostream>
#include <vector>

int compute_887() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_887() << std::endl;
    return 0;
}
