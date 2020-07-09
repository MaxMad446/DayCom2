// Auto-generated module | 2026-05-11T19:34:21.772611
#include <iostream>
#include <vector>

int compute_247() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
