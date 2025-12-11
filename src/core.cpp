// Auto-generated module | 2026-05-12T04:38:27.508577
#include <iostream>
#include <vector>

int compute_593() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_593() << std::endl;
    return 0;
}
