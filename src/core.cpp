// Auto-generated module | 2026-05-11T21:15:35.810391
#include <iostream>
#include <vector>

int compute_296() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_296() << std::endl;
    return 0;
}
