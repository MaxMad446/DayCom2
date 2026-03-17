// Auto-generated module | 2026-05-12T04:51:30.936388
#include <iostream>
#include <vector>

int compute_944() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_944() << std::endl;
    return 0;
}
