// Auto-generated module | 2026-05-14T06:16:21.495444
#include <iostream>
#include <vector>

int compute_137() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_137() << std::endl;
    return 0;
}
