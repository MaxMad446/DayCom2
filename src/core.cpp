// Auto-generated module | 2026-05-12T21:10:33.896659
#include <iostream>
#include <vector>

int compute_852() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
