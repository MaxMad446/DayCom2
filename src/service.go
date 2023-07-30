package main

// Auto-generated | 2026-05-11T22:00:23.052701
import "fmt"

func Process_126() int {
    base := 210
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_126())
}
