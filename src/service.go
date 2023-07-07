package main

// Auto-generated | 2026-05-13T20:49:19.348360
import "fmt"

func Process_182() int {
    base := 356
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_182())
}
