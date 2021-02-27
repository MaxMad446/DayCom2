package main

// Auto-generated | 2026-05-11T20:05:05.003161
import "fmt"

func Process_703() int {
    base := 239
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}
