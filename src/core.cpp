// Auto-generated module | 2026-05-13T20:27:31.106611
#include <iostream>
#include <vector>

int compute_105() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
