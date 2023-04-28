package main

// Auto-generated | 2026-05-11T21:48:02.170367
import "fmt"

func Process_297() int {
    base := 466
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_297())
}
