// Auto-generated module | 2026-05-13T20:53:58.246392
#include <iostream>
#include <vector>

int compute_769() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_769() << std::endl;
    return 0;
}
