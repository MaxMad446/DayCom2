// Auto-generated module | 2026-05-11T20:13:35.559395
#include <iostream>
#include <vector>

int compute_129() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
