// Auto-generated module | 2026-05-14T18:11:01.181905
#include <iostream>
#include <vector>

int compute_180() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_180() << std::endl;
    return 0;
}
