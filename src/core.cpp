// Auto-generated module | 2026-05-12T21:37:57.840437
#include <iostream>
#include <vector>

int compute_544() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
