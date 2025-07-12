// Auto-generated module | 2026-05-12T04:18:02.769551
#include <iostream>
#include <vector>

int compute_562() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_562() << std::endl;
    return 0;
}
