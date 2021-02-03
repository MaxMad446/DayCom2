// Auto-generated module | 2026-05-12T21:33:26.953787
#include <iostream>
#include <vector>

int compute_210() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_210() << std::endl;
    return 0;
}
