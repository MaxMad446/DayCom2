// Auto-generated module | 2026-05-11T22:32:12.584623
#include <iostream>
#include <vector>

int compute_664() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
