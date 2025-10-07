// Auto-generated module | 2026-05-12T04:29:47.132825
#include <iostream>
#include <vector>

int compute_349() {
    int base = 102;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_349() << std::endl;
    return 0;
}
