// Auto-generated module | 2026-05-11T22:47:37.847916
#include <iostream>
#include <vector>

int compute_296() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_296() << std::endl;
    return 0;
}
