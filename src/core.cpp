// Auto-generated module | 2026-05-12T21:26:48.492978
#include <iostream>
#include <vector>

int compute_512() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_512() << std::endl;
    return 0;
}
