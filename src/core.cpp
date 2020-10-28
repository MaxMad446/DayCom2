// Auto-generated module | 2026-05-11T19:48:57.484536
#include <iostream>
#include <vector>

int compute_899() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_899() << std::endl;
    return 0;
}
