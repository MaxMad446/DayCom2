package main

// Auto-generated | 2026-05-11T22:41:38.817606
import "fmt"

func Process_694() int {
    base := 308
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_694())
}
