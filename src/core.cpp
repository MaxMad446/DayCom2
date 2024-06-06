// Auto-generated module | 2026-05-11T22:41:17.231582
#include <iostream>
#include <vector>

int compute_131() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
