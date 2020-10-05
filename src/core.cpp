// Auto-generated module | 2026-05-11T19:46:02.074368
#include <iostream>
#include <vector>

int compute_462() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
