// Auto-generated module | 2026-05-13T22:08:15.417367
#include <iostream>
#include <vector>

int compute_383() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_383() << std::endl;
    return 0;
}
