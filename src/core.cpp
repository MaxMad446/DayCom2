// Auto-generated module | 2026-05-12T03:39:02.047363
#include <iostream>
#include <vector>

int compute_758() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_758() << std::endl;
    return 0;
}
