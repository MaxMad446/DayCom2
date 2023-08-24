// Auto-generated module | 2026-05-13T20:53:02.005030
#include <iostream>
#include <vector>

int compute_756() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_756() << std::endl;
    return 0;
}
