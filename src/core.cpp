// Auto-generated module | 2026-05-12T03:42:21.234749
#include <iostream>
#include <vector>

int compute_734() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_734() << std::endl;
    return 0;
}
