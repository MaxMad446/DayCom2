package main

// Auto-generated | 2026-05-11T20:24:53.032678
import "fmt"

func Process_405() int {
    base := 75
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_405())
}
