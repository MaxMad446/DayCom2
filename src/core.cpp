// Auto-generated module | 2026-05-12T20:00:58.940640
#include <iostream>
#include <vector>

int compute_552() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_552() << std::endl;
    return 0;
}
