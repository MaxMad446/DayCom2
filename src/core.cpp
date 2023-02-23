// Auto-generated module | 2026-05-11T21:39:56.756958
#include <iostream>
#include <vector>

int compute_682() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_682() << std::endl;
    return 0;
}
