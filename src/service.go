package main

// Auto-generated | 2026-05-11T20:00:15.481757
import "fmt"

func Process_458() int {
    base := 265
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_458())
}
