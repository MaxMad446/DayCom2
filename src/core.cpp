// Auto-generated module | 2026-05-11T21:36:17.190621
#include <iostream>
#include <vector>

int compute_488() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_488() << std::endl;
    return 0;
}
