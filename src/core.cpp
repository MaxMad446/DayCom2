// Auto-generated module | 2026-05-14T18:26:08.995169
#include <iostream>
#include <vector>

int compute_234() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_234() << std::endl;
    return 0;
}
