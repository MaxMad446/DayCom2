// Auto-generated module | 2026-05-11T22:37:25.954913
#include <iostream>
#include <vector>

int compute_454() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}
