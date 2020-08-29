// Auto-generated module | 2026-05-11T19:41:02.028897
#include <iostream>
#include <vector>

int compute_661() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
