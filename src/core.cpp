// Auto-generated module | 2026-05-14T18:24:08.157710
#include <iostream>
#include <vector>

int compute_937() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}
