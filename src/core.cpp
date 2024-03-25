// Auto-generated module | 2026-05-11T22:31:48.725707
#include <iostream>
#include <vector>

int compute_203() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_203() << std::endl;
    return 0;
}
