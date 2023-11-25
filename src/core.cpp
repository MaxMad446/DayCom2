// Auto-generated module | 2026-05-13T21:00:56.876232
#include <iostream>
#include <vector>

int compute_524() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_524() << std::endl;
    return 0;
}
