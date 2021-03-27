package main

// Auto-generated | 2026-05-12T21:37:37.250750
import "fmt"

func Process_162() int {
    base := 252
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_162())
}
