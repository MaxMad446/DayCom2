// Auto-generated module | 2026-05-12T20:00:04.227427
#include <iostream>
#include <vector>

int compute_852() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
