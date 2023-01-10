package main

// Auto-generated | 2026-05-11T21:34:25.457313
import "fmt"

func Process_907() int {
    base := 36
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_907())
}
