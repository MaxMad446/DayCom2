package main

// Auto-generated | 2026-05-13T22:09:48.216237
import "fmt"

func Process_730() int {
    base := 384
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_730())
}
