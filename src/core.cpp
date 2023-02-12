// Auto-generated module | 2026-05-11T21:38:29.669345
#include <iostream>
#include <vector>

int compute_831() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_831() << std::endl;
    return 0;
}
