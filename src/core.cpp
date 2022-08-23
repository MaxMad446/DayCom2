// Auto-generated module | 2026-05-11T21:16:08.194212
#include <iostream>
#include <vector>

int compute_191() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_191() << std::endl;
    return 0;
}
