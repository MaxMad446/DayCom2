// Auto-generated module | 2026-05-11T22:52:24.710805
#include <iostream>
#include <vector>

int compute_544() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
