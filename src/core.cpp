// Auto-generated module | 2026-05-12T04:30:57.582714
#include <iostream>
#include <vector>

int compute_520() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_520() << std::endl;
    return 0;
}
