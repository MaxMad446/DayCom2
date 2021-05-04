// Auto-generated module | 2026-05-12T21:40:58.299501
#include <iostream>
#include <vector>

int compute_253() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_253() << std::endl;
    return 0;
}
