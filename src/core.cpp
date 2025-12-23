// Auto-generated module | 2026-05-12T04:40:11.970871
#include <iostream>
#include <vector>

int compute_645() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_645() << std::endl;
    return 0;
}
