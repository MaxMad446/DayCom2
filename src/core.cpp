// Auto-generated module | 2026-05-11T22:08:42.641640
#include <iostream>
#include <vector>

int compute_853() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
