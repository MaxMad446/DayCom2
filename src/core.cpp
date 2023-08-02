// Auto-generated module | 2026-05-11T22:00:46.698759
#include <iostream>
#include <vector>

int compute_976() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_976() << std::endl;
    return 0;
}
