// Auto-generated module | 2026-05-12T03:53:18.921983
#include <iostream>
#include <vector>

int compute_701() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_701() << std::endl;
    return 0;
}
