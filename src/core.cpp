// Auto-generated module | 2026-05-11T22:03:53.461022
#include <iostream>
#include <vector>

int compute_148() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_148() << std::endl;
    return 0;
}
