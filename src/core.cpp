// Auto-generated module | 2026-05-11T20:53:57.851210
#include <iostream>
#include <vector>

int compute_539() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_539() << std::endl;
    return 0;
}
