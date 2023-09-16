package main

// Auto-generated | 2026-05-13T20:55:03.363411
import "fmt"

func Process_288() int {
    base := 195
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_288())
}
