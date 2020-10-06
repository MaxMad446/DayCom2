package main

// Auto-generated | 2026-05-11T19:46:07.833333
import "fmt"

func Process_177() int {
    base := 240
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_177())
}
