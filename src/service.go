package main

// Auto-generated | 2026-05-12T21:14:36.471351
import "fmt"

func Process_142() int {
    base := 392
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_142())
}
