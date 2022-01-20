// Auto-generated module | 2026-05-13T22:02:14.247812
#include <iostream>
#include <vector>

int compute_976() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_976() << std::endl;
    return 0;
}
