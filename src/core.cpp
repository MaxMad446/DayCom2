// Auto-generated module | 2026-05-12T21:11:25.789523
#include <iostream>
#include <vector>

int compute_520() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_520() << std::endl;
    return 0;
}
