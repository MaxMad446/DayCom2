package main

// Auto-generated | 2026-05-11T22:21:17.557156
import "fmt"

func Process_148() int {
    base := 466
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_148())
}
