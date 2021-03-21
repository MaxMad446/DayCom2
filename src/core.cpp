// Auto-generated module | 2026-05-11T20:07:40.464737
#include <iostream>
#include <vector>

int compute_789() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_789() << std::endl;
    return 0;
}
