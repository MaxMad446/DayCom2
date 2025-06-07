// Auto-generated module | 2026-05-12T04:13:23.418070
#include <iostream>
#include <vector>

int compute_364() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_364() << std::endl;
    return 0;
}
