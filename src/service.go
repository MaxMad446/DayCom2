package main

// Auto-generated | 2026-05-13T20:32:57.761577
import "fmt"

func Process_978() int {
    base := 200
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_978())
}
