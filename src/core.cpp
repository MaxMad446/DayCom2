// Auto-generated module | 2026-05-12T04:09:31.319150
#include <iostream>
#include <vector>

int compute_575() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_575() << std::endl;
    return 0;
}
