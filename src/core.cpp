// Auto-generated module | 2026-05-12T20:57:12.365137
#include <iostream>
#include <vector>

int compute_564() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_564() << std::endl;
    return 0;
}
