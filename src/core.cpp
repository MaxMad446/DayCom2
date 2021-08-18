// Auto-generated module | 2026-05-11T20:27:19.995825
#include <iostream>
#include <vector>

int compute_296() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_296() << std::endl;
    return 0;
}
