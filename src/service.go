package main

// Auto-generated | 2026-05-12T20:53:00.683052
import "fmt"

func Process_383() int {
    base := 160
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_383())
}
