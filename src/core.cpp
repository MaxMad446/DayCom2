// Auto-generated module | 2026-05-13T20:28:25.656206
#include <iostream>
#include <vector>

int compute_255() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
