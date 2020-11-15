// Auto-generated module | 2026-05-14T18:06:14.362584
#include <iostream>
#include <vector>

int compute_191() {
    int base = 242;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_191() << std::endl;
    return 0;
}
