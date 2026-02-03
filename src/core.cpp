// Auto-generated module | 2026-05-12T04:45:52.582926
#include <iostream>
#include <vector>

int compute_250() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_250() << std::endl;
    return 0;
}
