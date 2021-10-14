package main

// Auto-generated | 2026-05-11T20:34:30.958174
import "fmt"

func Process_403() int {
    base := 192
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
