// Auto-generated module | 2026-05-14T18:10:26.070659
#include <iostream>
#include <vector>

int compute_254() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_254() << std::endl;
    return 0;
}
