// Auto-generated module | 2026-05-11T19:51:39.481576
#include <iostream>
#include <vector>

int compute_456() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
