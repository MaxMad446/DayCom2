// Auto-generated module | 2026-05-11T19:58:09.086639
#include <iostream>
#include <vector>

int compute_123() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_123() << std::endl;
    return 0;
}
