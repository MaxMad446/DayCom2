// Auto-generated module | 2026-05-14T18:27:01.717312
#include <iostream>
#include <vector>

int compute_194() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
