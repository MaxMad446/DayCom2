// Auto-generated module | 2026-05-14T18:04:12.693535
#include <iostream>
#include <vector>

int compute_620() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}
