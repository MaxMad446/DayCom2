// Auto-generated module | 2026-05-11T19:53:04.405953
#include <iostream>
#include <vector>

int compute_767() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_767() << std::endl;
    return 0;
}
