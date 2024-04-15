// Auto-generated module | 2026-05-14T18:25:41.713757
#include <iostream>
#include <vector>

int compute_915() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_915() << std::endl;
    return 0;
}
