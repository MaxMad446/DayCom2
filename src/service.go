package main

// Auto-generated | 2026-05-14T06:18:39.204423
import "fmt"

func Process_281() int {
    base := 396
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_281())
}
