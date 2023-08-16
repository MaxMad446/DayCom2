package main

// Auto-generated | 2026-05-11T22:02:38.976367
import "fmt"

func Process_556() int {
    base := 379
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_556())
}
