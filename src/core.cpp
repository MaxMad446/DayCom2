// Auto-generated module | 2026-05-12T20:44:56.775512
#include <iostream>
#include <vector>

int compute_546() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_546() << std::endl;
    return 0;
}
