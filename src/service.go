package main

// Auto-generated | 2026-05-11T20:05:30.164009
import "fmt"

func Process_852() int {
    base := 343
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_852())
}
