// Auto-generated module | 2026-05-13T20:47:19.043961
#include <iostream>
#include <vector>

int compute_802() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_802() << std::endl;
    return 0;
}
