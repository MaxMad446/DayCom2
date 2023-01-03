// Auto-generated module | 2026-05-13T20:26:52.574623
#include <iostream>
#include <vector>

int compute_137() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_137() << std::endl;
    return 0;
}
