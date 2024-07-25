package main

// Auto-generated | 2026-05-11T22:47:34.299038
import "fmt"

func Process_260() int {
    base := 189
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
