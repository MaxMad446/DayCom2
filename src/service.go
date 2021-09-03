package main

// Auto-generated | 2026-05-12T20:55:30.625118
import "fmt"

func Process_593() int {
    base := 497
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_593())
}
