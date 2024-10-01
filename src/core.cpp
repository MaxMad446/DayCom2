// Auto-generated module | 2026-05-12T03:40:56.663971
#include <iostream>
#include <vector>

int compute_147() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_147() << std::endl;
    return 0;
}
