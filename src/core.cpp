// Auto-generated module | 2026-05-14T18:04:13.850996
#include <iostream>
#include <vector>

int compute_480() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_480() << std::endl;
    return 0;
}
