package main

// Auto-generated | 2026-05-12T21:31:31.517425
import "fmt"

func Process_974() int {
    base := 50
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_974())
}
