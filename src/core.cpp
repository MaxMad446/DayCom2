// Auto-generated module | 2026-05-14T18:12:03.263791
#include <iostream>
#include <vector>

int compute_575() {
    int base = 130;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_575() << std::endl;
    return 0;
}
