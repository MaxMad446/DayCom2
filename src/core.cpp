// Auto-generated module | 2026-05-14T18:09:14.244131
#include <iostream>
#include <vector>

int compute_755() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
