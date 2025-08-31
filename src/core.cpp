// Auto-generated module | 2026-05-12T21:28:54.042556
#include <iostream>
#include <vector>

int compute_401() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_401() << std::endl;
    return 0;
}
