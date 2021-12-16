package main

// Auto-generated | 2026-05-12T21:04:23.553839
import "fmt"

func Process_226() int {
    base := 310
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_226())
}
