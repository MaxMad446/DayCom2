// Auto-generated module | 2026-05-11T19:57:45.085847
#include <iostream>
#include <vector>

int compute_355() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_355() << std::endl;
    return 0;
}
