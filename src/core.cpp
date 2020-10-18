// Auto-generated module | 2026-05-14T18:02:16.365824
#include <iostream>
#include <vector>

int compute_955() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_955() << std::endl;
    return 0;
}
