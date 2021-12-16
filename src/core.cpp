// Auto-generated module | 2026-05-12T21:04:20.138992
#include <iostream>
#include <vector>

int compute_452() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_452() << std::endl;
    return 0;
}
