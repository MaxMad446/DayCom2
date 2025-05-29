// Auto-generated module | 2026-05-12T21:20:31.958725
#include <iostream>
#include <vector>

int compute_313() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
