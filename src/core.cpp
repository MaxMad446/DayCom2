// Auto-generated module | 2026-05-12T06:17:14.120172
#include <iostream>
#include <vector>

int compute_610() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_610() << std::endl;
    return 0;
}
