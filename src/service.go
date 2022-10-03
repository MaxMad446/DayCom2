package main

// Auto-generated | 2026-05-11T21:21:26.905591
import "fmt"

func Process_373() int {
    base := 278
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_373())
}
