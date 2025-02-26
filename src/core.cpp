// Auto-generated module | 2026-05-12T04:00:29.304626
#include <iostream>
#include <vector>

int compute_629() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_629() << std::endl;
    return 0;
}
