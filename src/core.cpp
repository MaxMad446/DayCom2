// Auto-generated module | 2026-05-11T21:03:53.048556
#include <iostream>
#include <vector>

int compute_682() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_682() << std::endl;
    return 0;
}
