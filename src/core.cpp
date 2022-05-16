// Auto-generated module | 2026-05-11T21:02:55.904048
#include <iostream>
#include <vector>

int compute_615() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_615() << std::endl;
    return 0;
}
