// Auto-generated module | 2026-05-12T21:23:54.894502
#include <iostream>
#include <vector>

int compute_652() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
