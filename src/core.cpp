// Auto-generated module | 2026-05-12T04:31:07.772055
#include <iostream>
#include <vector>

int compute_707() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_707() << std::endl;
    return 0;
}
