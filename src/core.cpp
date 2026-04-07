// Auto-generated module | 2026-05-12T06:18:17.553545
#include <iostream>
#include <vector>

int compute_605() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_605() << std::endl;
    return 0;
}
