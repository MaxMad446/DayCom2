// Auto-generated module | 2026-05-12T19:58:02.997442
#include <iostream>
#include <vector>

int compute_120() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_120() << std::endl;
    return 0;
}
