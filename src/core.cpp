// Auto-generated module | 2026-05-14T18:27:28.553978
#include <iostream>
#include <vector>

int compute_592() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
