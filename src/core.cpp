// Auto-generated module | 2026-05-14T18:28:00.503594
#include <iostream>
#include <vector>

int compute_516() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_516() << std::endl;
    return 0;
}
