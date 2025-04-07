// Auto-generated module | 2026-05-12T21:16:08.736562
#include <iostream>
#include <vector>

int compute_599() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_599() << std::endl;
    return 0;
}
