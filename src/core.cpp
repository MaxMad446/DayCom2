// Auto-generated module | 2026-05-12T20:43:35.747882
#include <iostream>
#include <vector>

int compute_577() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_577() << std::endl;
    return 0;
}
