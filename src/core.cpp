// Auto-generated module | 2026-05-12T21:09:04.401425
#include <iostream>
#include <vector>

int compute_820() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_820() << std::endl;
    return 0;
}
