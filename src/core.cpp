// Auto-generated module | 2026-05-12T21:08:03.812819
#include <iostream>
#include <vector>

int compute_219() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_219() << std::endl;
    return 0;
}
