// Auto-generated module | 2026-05-12T20:53:39.105827
#include <iostream>
#include <vector>

int compute_960() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_960() << std::endl;
    return 0;
}
