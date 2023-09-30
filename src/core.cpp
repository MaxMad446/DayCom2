// Auto-generated module | 2026-05-13T20:56:11.885452
#include <iostream>
#include <vector>

int compute_944() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_944() << std::endl;
    return 0;
}
