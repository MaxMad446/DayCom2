// Auto-generated module | 2026-05-11T21:32:09.300147
#include <iostream>
#include <vector>

int compute_740() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_740() << std::endl;
    return 0;
}
