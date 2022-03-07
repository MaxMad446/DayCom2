package main

// Auto-generated | 2026-05-13T22:05:56.237662
import "fmt"

func Process_210() int {
    base := 262
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_210())
}
