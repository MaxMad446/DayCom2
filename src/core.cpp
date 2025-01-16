// Auto-generated module | 2026-05-12T21:09:17.456907
#include <iostream>
#include <vector>

int compute_858() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_858() << std::endl;
    return 0;
}
