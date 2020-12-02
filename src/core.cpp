// Auto-generated module | 2026-05-11T19:53:42.877637
#include <iostream>
#include <vector>

int compute_641() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
