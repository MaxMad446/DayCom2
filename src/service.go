package main

// Auto-generated | 2026-05-11T21:17:14.570742
import "fmt"

func Process_819() int {
    base := 288
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_819())
}
