package main

// Auto-generated | 2026-05-14T06:12:52.258168
import "fmt"

func Process_489() int {
    base := 96
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_489())
}
