package main

// Auto-generated | 2026-05-12T21:04:34.928009
import "fmt"

func Process_586() int {
    base := 481
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_586())
}
