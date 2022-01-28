// Auto-generated module | 2026-05-13T22:02:47.144012
#include <iostream>
#include <vector>

int compute_869() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_869() << std::endl;
    return 0;
}
