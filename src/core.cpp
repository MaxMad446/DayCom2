// Auto-generated module | 2026-05-12T21:22:12.914355
#include <iostream>
#include <vector>

int compute_670() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
