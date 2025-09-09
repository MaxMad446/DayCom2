package main

// Auto-generated | 2026-05-12T04:26:04.657437
import "fmt"

func Process_801() int {
    base := 192
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_801())
}
