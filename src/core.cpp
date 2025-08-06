// Auto-generated module | 2026-05-12T21:26:41.163514
#include <iostream>
#include <vector>

int compute_628() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_628() << std::endl;
    return 0;
}
