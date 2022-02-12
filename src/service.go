package main

// Auto-generated | 2026-05-11T20:50:45.234588
import "fmt"

func Process_389() int {
    base := 92
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_389())
}
