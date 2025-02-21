// Auto-generated module | 2026-05-12T21:12:28.850933
#include <iostream>
#include <vector>

int compute_446() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_446() << std::endl;
    return 0;
}
