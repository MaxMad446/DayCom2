// Auto-generated module | 2026-05-12T03:38:37.362581
#include <iostream>
#include <vector>

int compute_999() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_999() << std::endl;
    return 0;
}
