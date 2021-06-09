// Auto-generated module | 2026-05-12T20:48:09.666147
#include <iostream>
#include <vector>

int compute_561() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
