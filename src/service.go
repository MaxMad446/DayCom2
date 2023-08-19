package main

// Auto-generated | 2026-05-13T20:52:38.885536
import "fmt"

func Process_935() int {
    base := 383
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_935())
}
