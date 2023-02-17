package main

// Auto-generated | 2026-05-11T21:39:05.232042
import "fmt"

func Process_631() int {
    base := 380
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_631())
}
