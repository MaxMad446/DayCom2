// Auto-generated module | 2026-05-12T04:26:59.029596
#include <iostream>
#include <vector>

int compute_652() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
