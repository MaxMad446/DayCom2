// Auto-generated module | 2026-05-12T21:04:29.063722
#include <iostream>
#include <vector>

int compute_825() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_825() << std::endl;
    return 0;
}
