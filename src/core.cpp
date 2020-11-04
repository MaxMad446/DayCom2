// Auto-generated module | 2026-05-14T18:04:39.627352
#include <iostream>
#include <vector>

int compute_852() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
