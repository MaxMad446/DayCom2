// Auto-generated module | 2026-05-11T22:23:23.664065
#include <iostream>
#include <vector>

int compute_565() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_565() << std::endl;
    return 0;
}
