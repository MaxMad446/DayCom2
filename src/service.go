package main

// Auto-generated | 2026-05-12T20:40:19.320204
import "fmt"

func Process_201() int {
    base := 199
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_201())
}
