package main

// Auto-generated | 2026-05-12T20:56:33.518580
import "fmt"

func Process_801() int {
    base := 93
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_801())
}
