// Auto-generated module | 2026-05-12T21:35:14.581101
#include <iostream>
#include <vector>

int compute_334() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_334() << std::endl;
    return 0;
}
