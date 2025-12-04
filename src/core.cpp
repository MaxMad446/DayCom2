// Auto-generated module | 2026-05-12T04:37:31.136669
#include <iostream>
#include <vector>

int compute_804() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_804() << std::endl;
    return 0;
}
