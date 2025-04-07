// Auto-generated module | 2026-05-12T21:16:10.094866
#include <iostream>
#include <vector>

int compute_682() {
    int base = 361;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_682() << std::endl;
    return 0;
}
