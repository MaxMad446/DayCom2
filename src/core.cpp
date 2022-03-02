// Auto-generated module | 2026-05-11T20:53:02.327283
#include <iostream>
#include <vector>

int compute_751() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_751() << std::endl;
    return 0;
}
