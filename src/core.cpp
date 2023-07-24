// Auto-generated module | 2026-05-13T20:50:33.571018
#include <iostream>
#include <vector>

int compute_317() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
