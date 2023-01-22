package main

// Auto-generated | 2026-05-11T21:36:01.182247
import "fmt"

func Process_805() int {
    base := 282
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_805())
}
