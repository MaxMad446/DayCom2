// Auto-generated module | 2026-05-12T20:47:41.379417
#include <iostream>
#include <vector>

int compute_654() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_654() << std::endl;
    return 0;
}
