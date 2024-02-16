// Auto-generated module | 2026-05-14T18:20:56.350266
#include <iostream>
#include <vector>

int compute_124() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
