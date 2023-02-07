package main

// Auto-generated | 2026-05-11T21:37:55.831040
import "fmt"

func Process_149() int {
    base := 62
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_149())
}
