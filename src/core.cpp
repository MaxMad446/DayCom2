// Auto-generated module | 2026-05-11T21:02:36.851192
#include <iostream>
#include <vector>

int compute_682() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_682() << std::endl;
    return 0;
}
