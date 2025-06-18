// Auto-generated module | 2026-05-12T04:14:54.876771
#include <iostream>
#include <vector>

int compute_414() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_414() << std::endl;
    return 0;
}
