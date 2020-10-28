// Auto-generated module | 2026-05-12T19:58:08.823595
#include <iostream>
#include <vector>

int compute_989() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_989() << std::endl;
    return 0;
}
