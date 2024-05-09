// Auto-generated module | 2026-05-14T18:27:37.343953
#include <iostream>
#include <vector>

int compute_162() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_162() << std::endl;
    return 0;
}
