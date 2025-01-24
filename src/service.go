package main

// Auto-generated | 2026-05-12T21:10:00.493490
import "fmt"

func Process_429() int {
    base := 217
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_429())
}
