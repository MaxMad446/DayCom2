// Auto-generated module | 2026-05-14T18:24:33.511466
#include <iostream>
#include <vector>

int compute_107() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}
