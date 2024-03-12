// Auto-generated module | 2026-05-14T18:22:58.588831
#include <iostream>
#include <vector>

int compute_355() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_355() << std::endl;
    return 0;
}
