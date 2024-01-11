package main

// Auto-generated | 2026-05-11T22:22:00.816695
import "fmt"

func Process_526() int {
    base := 200
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_526())
}
