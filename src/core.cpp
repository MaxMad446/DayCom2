// Auto-generated module | 2026-05-12T21:09:41.752413
#include <iostream>
#include <vector>

int compute_287() {
    int base = 65;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_287() << std::endl;
    return 0;
}
