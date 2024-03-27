// Auto-generated module | 2026-05-14T18:24:07.018814
#include <iostream>
#include <vector>

int compute_767() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_767() << std::endl;
    return 0;
}
