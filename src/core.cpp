// Auto-generated module | 2026-05-13T20:28:30.162443
#include <iostream>
#include <vector>

int compute_898() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_898() << std::endl;
    return 0;
}
