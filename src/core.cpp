// Auto-generated module | 2026-05-11T21:23:07.215996
#include <iostream>
#include <vector>

int compute_812() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_812() << std::endl;
    return 0;
}
