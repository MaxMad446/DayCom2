// Auto-generated module | 2026-05-11T22:09:08.856864
#include <iostream>
#include <vector>

int compute_946() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_946() << std::endl;
    return 0;
}
