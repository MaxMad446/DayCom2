// Auto-generated module | 2026-05-12T04:46:37.393871
#include <iostream>
#include <vector>

int compute_259() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_259() << std::endl;
    return 0;
}
