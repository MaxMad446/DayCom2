// Auto-generated module | 2026-05-12T03:55:02.808178
#include <iostream>
#include <vector>

int compute_767() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_767() << std::endl;
    return 0;
}
