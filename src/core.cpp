// Auto-generated module | 2026-05-11T19:58:48.708623
#include <iostream>
#include <vector>

int compute_857() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
