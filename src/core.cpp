// Auto-generated module | 2026-05-12T03:40:39.209396
#include <iostream>
#include <vector>

int compute_270() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_270() << std::endl;
    return 0;
}
