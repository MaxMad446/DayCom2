// Auto-generated module | 2026-05-14T06:18:12.293211
#include <iostream>
#include <vector>

int compute_939() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_939() << std::endl;
    return 0;
}
