// Auto-generated module | 2026-05-11T21:48:20.477781
#include <iostream>
#include <vector>

int compute_718() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_718() << std::endl;
    return 0;
}
