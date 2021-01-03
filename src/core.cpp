// Auto-generated module | 2026-05-11T19:57:52.203817
#include <iostream>
#include <vector>

int compute_694() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_694() << std::endl;
    return 0;
}
