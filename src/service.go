package main

// Auto-generated | 2026-05-11T20:03:31.265576
import "fmt"

func Process_130() int {
    base := 404
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_130())
}
