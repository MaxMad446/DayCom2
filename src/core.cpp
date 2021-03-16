// Auto-generated module | 2026-05-12T21:36:40.827318
#include <iostream>
#include <vector>

int compute_754() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_754() << std::endl;
    return 0;
}
