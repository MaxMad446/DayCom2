// Auto-generated module | 2026-05-11T21:11:34.909444
#include <iostream>
#include <vector>

int compute_777() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_777() << std::endl;
    return 0;
}
