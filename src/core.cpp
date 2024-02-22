// Auto-generated module | 2026-05-14T18:21:26.794006
#include <iostream>
#include <vector>

int compute_180() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_180() << std::endl;
    return 0;
}
