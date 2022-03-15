package main

// Auto-generated | 2026-05-13T22:06:36.766493
import "fmt"

func Process_540() int {
    base := 387
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_540())
}
