// Auto-generated module | 2026-05-12T20:55:26.901066
#include <iostream>
#include <vector>

int compute_938() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_938() << std::endl;
    return 0;
}
