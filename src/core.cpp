// Auto-generated module | 2026-05-14T18:19:22.317216
#include <iostream>
#include <vector>

int compute_139() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
