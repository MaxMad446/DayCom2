// Auto-generated module | 2026-05-12T20:54:52.523972
#include <iostream>
#include <vector>

int compute_562() {
    int base = 245;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_562() << std::endl;
    return 0;
}
