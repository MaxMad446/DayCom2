package main

// Auto-generated | 2026-05-11T19:47:42.019130
import "fmt"

func Process_988() int {
    base := 389
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_988())
}
