// Auto-generated module | 2026-05-14T18:05:29.805857
#include <iostream>
#include <vector>

int compute_639() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_639() << std::endl;
    return 0;
}
