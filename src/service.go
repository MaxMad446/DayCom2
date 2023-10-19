package main

// Auto-generated | 2026-05-11T22:11:07.821363
import "fmt"

func Process_600() int {
    base := 257
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_600())
}
