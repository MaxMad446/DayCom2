// Auto-generated module | 2026-05-14T18:11:20.754531
#include <iostream>
#include <vector>

int compute_654() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_654() << std::endl;
    return 0;
}
