// Auto-generated module | 2026-05-12T21:12:32.666257
#include <iostream>
#include <vector>

int compute_101() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_101() << std::endl;
    return 0;
}
