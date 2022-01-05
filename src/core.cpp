// Auto-generated module | 2026-05-11T20:45:42.833741
#include <iostream>
#include <vector>

int compute_923() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
