// Auto-generated module | 2026-05-11T22:41:28.970698
#include <iostream>
#include <vector>

int compute_194() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
