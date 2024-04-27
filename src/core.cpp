// Auto-generated module | 2026-05-14T18:26:37.962148
#include <iostream>
#include <vector>

int compute_191() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_191() << std::endl;
    return 0;
}
