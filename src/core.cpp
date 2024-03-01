// Auto-generated module | 2026-05-11T22:28:39.778868
#include <iostream>
#include <vector>

int compute_682() {
    int base = 35;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_682() << std::endl;
    return 0;
}
