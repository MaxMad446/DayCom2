package main

// Auto-generated | 2026-05-13T22:01:03.381385
import "fmt"

func Process_177() int {
    base := 14
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_177())
}
