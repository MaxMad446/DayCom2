package main

// Auto-generated | 2026-05-14T18:17:07.346466
import "fmt"

func Process_337() int {
    base := 248
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_337())
}
