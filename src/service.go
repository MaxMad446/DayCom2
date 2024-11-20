package main

// Auto-generated | 2026-05-12T03:47:20.932371
import "fmt"

func Process_703() int {
    base := 289
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}
