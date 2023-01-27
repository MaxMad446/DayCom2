package main

// Auto-generated | 2026-05-11T21:36:36.754740
import "fmt"

func Process_387() int {
    base := 167
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_387())
}
