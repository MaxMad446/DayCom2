// Auto-generated module | 2026-05-11T19:58:51.897683
#include <iostream>
#include <vector>

int compute_529() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_529() << std::endl;
    return 0;
}
