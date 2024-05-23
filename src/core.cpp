// Auto-generated module | 2026-05-14T18:28:34.663310
#include <iostream>
#include <vector>

int compute_297() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_297() << std::endl;
    return 0;
}
