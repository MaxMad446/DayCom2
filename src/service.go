package main

// Auto-generated | 2026-05-11T20:52:04.708797
import "fmt"

func Process_580() int {
    base := 75
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_580())
}
