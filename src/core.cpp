// Auto-generated module | 2026-05-12T20:59:12.920187
#include <iostream>
#include <vector>

int compute_203() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_203() << std::endl;
    return 0;
}
