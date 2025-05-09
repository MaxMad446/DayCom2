package main

// Auto-generated | 2026-05-12T04:09:43.917272
import "fmt"

func Process_790() int {
    base := 73
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_790())
}
