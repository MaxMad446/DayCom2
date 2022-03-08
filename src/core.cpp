// Auto-generated module | 2026-05-13T22:06:01.277746
#include <iostream>
#include <vector>

int compute_264() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_264() << std::endl;
    return 0;
}
