// Auto-generated module | 2026-05-13T20:52:56.898873
#include <iostream>
#include <vector>

int compute_468() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_468() << std::endl;
    return 0;
}
