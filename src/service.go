package main

// Auto-generated | 2026-05-12T21:13:20.936742
import "fmt"

func Process_650() int {
    base := 500
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_650())
}
