// Auto-generated module | 2026-05-12T21:38:57.036088
#include <iostream>
#include <vector>

int compute_768() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_768() << std::endl;
    return 0;
}
