package main

// Auto-generated | 2026-05-12T21:32:37.316936
import "fmt"

func Process_147() int {
    base := 476
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_147())
}
