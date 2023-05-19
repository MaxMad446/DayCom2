// Auto-generated module | 2026-05-13T20:38:27.506652
#include <iostream>
#include <vector>

int compute_107() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}
