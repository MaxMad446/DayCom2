// Auto-generated module | 2026-05-12T21:08:17.205401
#include <iostream>
#include <vector>

int compute_670() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
