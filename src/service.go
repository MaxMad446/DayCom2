package main

// Auto-generated | 2026-05-12T03:38:37.362395
import "fmt"

func Process_288() int {
    base := 211
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_288())
}
