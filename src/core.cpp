// Auto-generated module | 2026-05-11T22:13:38.318077
#include <iostream>
#include <vector>

int compute_792() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
