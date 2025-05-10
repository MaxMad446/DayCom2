// Auto-generated module | 2026-05-12T04:09:49.319768
#include <iostream>
#include <vector>

int compute_468() {
    int base = 334;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_468() << std::endl;
    return 0;
}
