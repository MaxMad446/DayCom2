package main

// Auto-generated | 2026-05-14T06:26:20.234219
import "fmt"

func Process_778() int {
    base := 400
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_778())
}
