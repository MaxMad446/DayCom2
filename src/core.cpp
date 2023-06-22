// Auto-generated module | 2026-05-13T20:48:01.962932
#include <iostream>
#include <vector>

int compute_565() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_565() << std::endl;
    return 0;
}
