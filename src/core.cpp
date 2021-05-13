// Auto-generated module | 2026-05-11T20:14:22.505038
#include <iostream>
#include <vector>

int compute_634() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
