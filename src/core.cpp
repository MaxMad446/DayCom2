// Auto-generated module | 2026-05-12T04:03:46.274963
#include <iostream>
#include <vector>

int compute_273() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_273() << std::endl;
    return 0;
}
