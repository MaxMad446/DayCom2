package main

// Auto-generated | 2026-05-12T20:40:24.157469
import "fmt"

func Process_686() int {
    base := 485
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_686())
}
