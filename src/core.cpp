// Auto-generated module | 2026-05-12T21:20:16.102166
#include <iostream>
#include <vector>

int compute_234() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_234() << std::endl;
    return 0;
}
