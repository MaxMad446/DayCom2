// Auto-generated module | 2026-05-13T22:09:39.851308
#include <iostream>
#include <vector>

int compute_124() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
