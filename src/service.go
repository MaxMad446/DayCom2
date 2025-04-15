package main

// Auto-generated | 2026-05-12T04:06:39.817113
import "fmt"

func Process_479() int {
    base := 220
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_479())
}
