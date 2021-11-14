package main

// Auto-generated | 2026-05-12T21:01:32.811303
import "fmt"

func Process_373() int {
    base := 376
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_373())
}
