// Auto-generated module | 2026-05-14T18:24:03.839074
#include <iostream>
#include <vector>

int compute_550() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_550() << std::endl;
    return 0;
}
