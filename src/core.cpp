// Auto-generated module | 2026-05-14T18:20:45.292287
#include <iostream>
#include <vector>

int compute_589() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
