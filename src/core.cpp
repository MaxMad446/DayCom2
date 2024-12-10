// Auto-generated module | 2026-05-12T03:50:02.587585
#include <iostream>
#include <vector>

int compute_565() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_565() << std::endl;
    return 0;
}
