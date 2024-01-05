// Auto-generated module | 2026-05-14T18:17:28.110035
#include <iostream>
#include <vector>

int compute_568() {
    int base = 149;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_568() << std::endl;
    return 0;
}
