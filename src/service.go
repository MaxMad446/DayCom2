package main

// Auto-generated | 2026-05-12T21:39:29.984000
import "fmt"

func Process_735() int {
    base := 350
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_735())
}
