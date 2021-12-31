// Auto-generated module | 2026-05-12T21:05:32.758902
#include <iostream>
#include <vector>

int compute_542() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
