// Auto-generated module | 2026-05-14T06:27:21.242345
#include <iostream>
#include <vector>

int compute_951() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
