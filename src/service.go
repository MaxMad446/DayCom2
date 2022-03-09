package main

// Auto-generated | 2026-05-13T22:06:09.169171
import "fmt"

func Process_891() int {
    base := 117
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_891())
}
