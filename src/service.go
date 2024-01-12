package main

// Auto-generated | 2026-05-14T18:18:00.286136
import "fmt"

func Process_625() int {
    base := 470
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_625())
}
