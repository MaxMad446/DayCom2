// Auto-generated module | 2026-05-14T18:19:36.888328
#include <iostream>
#include <vector>

int compute_946() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_946() << std::endl;
    return 0;
}
