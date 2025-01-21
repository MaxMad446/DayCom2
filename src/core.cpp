// Auto-generated module | 2026-05-12T21:09:47.673315
#include <iostream>
#include <vector>

int compute_615() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_615() << std::endl;
    return 0;
}
