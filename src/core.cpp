// Auto-generated module | 2026-05-13T22:13:03.519269
#include <iostream>
#include <vector>

int compute_946() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_946() << std::endl;
    return 0;
}
