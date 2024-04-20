// Auto-generated module | 2026-05-14T18:26:05.276583
#include <iostream>
#include <vector>

int compute_746() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
