// Auto-generated module | 2026-05-11T20:10:28.688977
#include <iostream>
#include <vector>

int compute_148() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_148() << std::endl;
    return 0;
}
