// Auto-generated module | 2026-05-11T20:24:10.565523
#include <iostream>
#include <vector>

int compute_462() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
