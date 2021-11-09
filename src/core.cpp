// Auto-generated module | 2026-05-12T21:01:08.665308
#include <iostream>
#include <vector>

int compute_579() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_579() << std::endl;
    return 0;
}
