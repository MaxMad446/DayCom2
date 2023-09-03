// Auto-generated module | 2026-05-11T22:04:57.139819
#include <iostream>
#include <vector>

int compute_989() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_989() << std::endl;
    return 0;
}
