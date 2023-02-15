package main

// Auto-generated | 2026-05-11T21:38:55.448238
import "fmt"

func Process_400() int {
    base := 365
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_400())
}
