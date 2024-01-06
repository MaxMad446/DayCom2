package main

// Auto-generated | 2026-05-14T18:17:32.299476
import "fmt"

func Process_188() int {
    base := 24
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_188())
}
