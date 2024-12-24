// Auto-generated module | 2026-05-12T03:51:49.508568
#include <iostream>
#include <vector>

int compute_203() {
    int base = 208;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_203() << std::endl;
    return 0;
}
