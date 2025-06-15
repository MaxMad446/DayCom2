// Auto-generated module | 2026-05-12T04:14:27.813048
#include <iostream>
#include <vector>

int compute_233() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_233() << std::endl;
    return 0;
}
