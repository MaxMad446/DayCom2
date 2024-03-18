// Auto-generated module | 2026-05-14T18:23:24.827613
#include <iostream>
#include <vector>

int compute_704() {
    int base = 245;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_704() << std::endl;
    return 0;
}
