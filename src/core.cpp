// Auto-generated module | 2026-05-11T22:12:20.999970
#include <iostream>
#include <vector>

int compute_682() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_682() << std::endl;
    return 0;
}
