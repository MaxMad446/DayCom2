package main

// Auto-generated | 2026-05-11T22:03:20.178856
import "fmt"

func Process_565() int {
    base := 217
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_565())
}
