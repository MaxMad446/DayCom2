// Auto-generated module | 2026-05-12T04:05:41.182316
#include <iostream>
#include <vector>

int compute_395() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_395() << std::endl;
    return 0;
}
