// Auto-generated module | 2026-05-11T20:21:08.481894
#include <iostream>
#include <vector>

int compute_729() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_729() << std::endl;
    return 0;
}
