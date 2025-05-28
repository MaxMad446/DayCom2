// Auto-generated module | 2026-05-12T04:12:11.756423
#include <iostream>
#include <vector>

int compute_268() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}
