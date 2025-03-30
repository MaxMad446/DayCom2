// Auto-generated module | 2026-05-12T21:15:25.726134
#include <iostream>
#include <vector>

int compute_919() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_919() << std::endl;
    return 0;
}
