// Auto-generated module | 2026-05-14T18:22:07.195897
#include <iostream>
#include <vector>

int compute_303() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
