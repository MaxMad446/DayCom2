package main

// Auto-generated | 2026-05-11T21:53:28.119726
import "fmt"

func Process_708() int {
    base := 356
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_708())
}
