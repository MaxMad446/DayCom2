// Auto-generated module | 2026-05-11T19:38:22.953373
#include <iostream>
#include <vector>

int compute_991() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}
