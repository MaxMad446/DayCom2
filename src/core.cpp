// Auto-generated module | 2026-05-12T21:13:47.175142
#include <iostream>
#include <vector>

int compute_270() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_270() << std::endl;
    return 0;
}
