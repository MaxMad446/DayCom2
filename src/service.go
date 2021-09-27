package main

// Auto-generated | 2026-05-12T20:57:47.050875
import "fmt"

func Process_710() int {
    base := 284
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_710())
}
