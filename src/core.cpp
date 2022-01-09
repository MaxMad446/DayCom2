// Auto-generated module | 2026-05-13T22:01:08.936917
#include <iostream>
#include <vector>

int compute_731() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_731() << std::endl;
    return 0;
}
