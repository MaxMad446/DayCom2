// Auto-generated module | 2026-05-12T20:48:16.979870
#include <iostream>
#include <vector>

int compute_503() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_503() << std::endl;
    return 0;
}
