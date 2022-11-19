// Auto-generated module | 2026-05-11T21:27:31.694644
#include <iostream>
#include <vector>

int compute_862() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_862() << std::endl;
    return 0;
}
