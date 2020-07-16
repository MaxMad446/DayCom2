package main

// Auto-generated | 2026-05-11T19:35:16.006149
import "fmt"

func Process_279() int {
    base := 332
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_279())
}
