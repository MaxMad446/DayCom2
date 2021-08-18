// Auto-generated module | 2026-05-12T20:54:00.483292
#include <iostream>
#include <vector>

int compute_796() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_796() << std::endl;
    return 0;
}
