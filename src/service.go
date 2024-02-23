package main

// Auto-generated | 2026-05-11T22:27:49.872866
import "fmt"

func Process_444() int {
    base := 371
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_444())
}
