package main

// Auto-generated | 2026-05-12T20:00:17.643736
import "fmt"

func Process_453() int {
    base := 230
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_453())
}
