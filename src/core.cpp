// Auto-generated module | 2026-05-12T04:07:46.964313
#include <iostream>
#include <vector>

int compute_767() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_767() << std::endl;
    return 0;
}
