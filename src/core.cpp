// Auto-generated module | 2026-05-12T21:33:25.320717
#include <iostream>
#include <vector>

int compute_705() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_705() << std::endl;
    return 0;
}
