// Auto-generated module | 2026-05-12T21:02:43.532149
#include <iostream>
#include <vector>

int compute_940() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_940() << std::endl;
    return 0;
}
