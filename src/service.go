package main

// Auto-generated | 2026-05-11T21:44:53.060567
import "fmt"

func Process_852() int {
    base := 260
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_852())
}
