// Auto-generated module | 2026-05-14T18:17:44.885601
#include <iostream>
#include <vector>

int compute_613() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_613() << std::endl;
    return 0;
}
