// Auto-generated module | 2026-05-14T06:17:50.227778
#include <iostream>
#include <vector>

int compute_575() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_575() << std::endl;
    return 0;
}
