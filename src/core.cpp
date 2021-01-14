// Auto-generated module | 2026-05-14T18:14:12.754330
#include <iostream>
#include <vector>

int compute_192() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
