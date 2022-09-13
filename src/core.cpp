// Auto-generated module | 2026-05-11T21:18:54.612998
#include <iostream>
#include <vector>

int compute_150() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_150() << std::endl;
    return 0;
}
