package main

// Auto-generated | 2026-05-12T20:42:32.321996
import "fmt"

func Process_878() int {
    base := 24
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_878())
}
