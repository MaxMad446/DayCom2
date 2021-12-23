// Auto-generated module | 2026-05-11T20:44:07.187934
#include <iostream>
#include <vector>

int compute_592() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
