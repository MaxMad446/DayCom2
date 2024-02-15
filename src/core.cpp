// Auto-generated module | 2026-05-14T18:20:51.586012
#include <iostream>
#include <vector>

int compute_309() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_309() << std::endl;
    return 0;
}
