// Auto-generated module | 2026-05-11T21:52:21.446762
#include <iostream>
#include <vector>

int compute_694() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_694() << std::endl;
    return 0;
}
