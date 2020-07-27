// Auto-generated module | 2026-05-11T19:36:41.056472
#include <iostream>
#include <vector>

int compute_827() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_827() << std::endl;
    return 0;
}
