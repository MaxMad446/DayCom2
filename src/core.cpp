// Auto-generated module | 2026-05-11T21:06:08.339411
#include <iostream>
#include <vector>

int compute_665() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_665() << std::endl;
    return 0;
}
