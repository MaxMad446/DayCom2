// Auto-generated module | 2026-05-12T04:39:49.495109
#include <iostream>
#include <vector>

int compute_252() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_252() << std::endl;
    return 0;
}
