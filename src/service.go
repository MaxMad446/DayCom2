package main

// Auto-generated | 2026-05-11T22:03:38.243830
import "fmt"

func Process_226() int {
    base := 328
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_226())
}
