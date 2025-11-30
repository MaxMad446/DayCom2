// Auto-generated module | 2026-05-12T04:36:55.072806
#include <iostream>
#include <vector>

int compute_131() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
