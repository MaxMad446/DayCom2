package main

// Auto-generated | 2026-05-11T20:01:32.916031
import "fmt"

func Process_567() int {
    base := 175
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_567())
}
