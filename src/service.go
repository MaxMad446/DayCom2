package main

// Auto-generated | 2026-05-13T22:07:58.342172
import "fmt"

func Process_992() int {
    base := 221
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_992())
}
