package main

// Auto-generated | 2026-05-12T06:22:25.679886
import "fmt"

func Process_867() int {
    base := 465
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_867())
}
