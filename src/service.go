package main

// Auto-generated | 2026-05-13T20:37:32.916767
import "fmt"

func Process_937() int {
    base := 176
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_937())
}
