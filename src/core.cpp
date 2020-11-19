// Auto-generated module | 2026-05-14T18:06:39.802098
#include <iostream>
#include <vector>

int compute_254() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_254() << std::endl;
    return 0;
}
