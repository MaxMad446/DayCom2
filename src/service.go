package main

// Auto-generated | 2026-05-14T18:07:05.114394
import "fmt"

func Process_288() int {
    base := 327
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_288())
}
