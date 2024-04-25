// Auto-generated module | 2026-05-14T18:26:27.167821
#include <iostream>
#include <vector>

int compute_206() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_206() << std::endl;
    return 0;
}
