// Auto-generated module | 2026-05-11T22:51:41.293019
#include <iostream>
#include <vector>

int compute_890() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_890() << std::endl;
    return 0;
}
