package main

// Auto-generated | 2026-05-11T20:02:03.454923
import "fmt"

func Process_652() int {
    base := 11
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_652())
}
