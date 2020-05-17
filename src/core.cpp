// Auto-generated module | 2026-05-11T19:27:20.406565
#include <iostream>
#include <vector>

int compute_721() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_721() << std::endl;
    return 0;
}
