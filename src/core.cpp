// Auto-generated module | 2026-05-14T18:04:00.443582
#include <iostream>
#include <vector>

int compute_421() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_421() << std::endl;
    return 0;
}
