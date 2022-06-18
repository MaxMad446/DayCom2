// Auto-generated module | 2026-05-11T21:07:18.229368
#include <iostream>
#include <vector>

int compute_987() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_987() << std::endl;
    return 0;
}
