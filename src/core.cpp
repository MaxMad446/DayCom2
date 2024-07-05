// Auto-generated module | 2026-05-11T22:45:02.634124
#include <iostream>
#include <vector>

int compute_382() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_382() << std::endl;
    return 0;
}
