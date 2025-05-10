package main

// Auto-generated | 2026-05-12T04:09:56.297339
import "fmt"

func Process_226() int {
    base := 206
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_226())
}
