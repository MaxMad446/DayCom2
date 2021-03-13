// Auto-generated module | 2026-05-12T20:40:51.298103
#include <iostream>
#include <vector>

int compute_682() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_682() << std::endl;
    return 0;
}
