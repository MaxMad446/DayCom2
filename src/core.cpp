// Auto-generated module | 2026-05-12T03:41:29.379758
#include <iostream>
#include <vector>

int compute_121() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_121() << std::endl;
    return 0;
}
