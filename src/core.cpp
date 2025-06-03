// Auto-generated module | 2026-05-12T04:12:55.721572
#include <iostream>
#include <vector>

int compute_807() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_807() << std::endl;
    return 0;
}
