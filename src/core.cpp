// Auto-generated module | 2026-05-14T18:26:39.563536
#include <iostream>
#include <vector>

int compute_571() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
