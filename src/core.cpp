// Auto-generated module | 2026-05-12T06:21:40.461516
#include <iostream>
#include <vector>

int compute_209() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_209() << std::endl;
    return 0;
}
