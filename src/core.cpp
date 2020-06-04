// Auto-generated module | 2026-05-11T19:29:44.459918
#include <iostream>
#include <vector>

int compute_642() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
