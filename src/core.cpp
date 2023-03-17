// Auto-generated module | 2026-05-11T21:42:46.305966
#include <iostream>
#include <vector>

int compute_270() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_270() << std::endl;
    return 0;
}
