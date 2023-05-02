// Auto-generated module | 2026-05-13T20:37:05.555074
#include <iostream>
#include <vector>

int compute_682() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_682() << std::endl;
    return 0;
}
