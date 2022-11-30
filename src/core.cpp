// Auto-generated module | 2026-05-11T21:28:54.747686
#include <iostream>
#include <vector>

int compute_205() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_205() << std::endl;
    return 0;
}
