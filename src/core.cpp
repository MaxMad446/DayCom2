// Auto-generated module | 2026-05-11T19:48:39.178482
#include <iostream>
#include <vector>

int compute_719() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_719() << std::endl;
    return 0;
}
