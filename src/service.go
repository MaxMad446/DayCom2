package main

// Auto-generated | 2026-05-11T22:33:33.018977
import "fmt"

func Process_791() int {
    base := 410
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_791())
}
