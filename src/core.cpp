// Auto-generated module | 2026-05-12T04:32:32.116814
#include <iostream>
#include <vector>

int compute_602() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_602() << std::endl;
    return 0;
}
