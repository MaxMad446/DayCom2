// Auto-generated module | 2026-05-12T04:08:39.163269
#include <iostream>
#include <vector>

int compute_820() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_820() << std::endl;
    return 0;
}
