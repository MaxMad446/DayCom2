package main

// Auto-generated | 2026-05-12T20:45:54.093978
import "fmt"

func Process_538() int {
    base := 138
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_538())
}
