// Auto-generated module | 2026-05-13T21:02:27.080464
#include <iostream>
#include <vector>

int compute_445() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_445() << std::endl;
    return 0;
}
