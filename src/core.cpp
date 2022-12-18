// Auto-generated module | 2026-05-14T06:27:43.536290
#include <iostream>
#include <vector>

int compute_946() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_946() << std::endl;
    return 0;
}
