// Auto-generated module | 2026-05-12T04:00:13.249663
#include <iostream>
#include <vector>

int compute_848() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_848() << std::endl;
    return 0;
}
