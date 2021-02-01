// Auto-generated module | 2026-05-12T20:37:37.520445
#include <iostream>
#include <vector>

int compute_652() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
