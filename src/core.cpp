// Auto-generated module | 2026-05-14T18:17:39.439777
#include <iostream>
#include <vector>

int compute_421() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_421() << std::endl;
    return 0;
}
