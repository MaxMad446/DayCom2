package main

// Auto-generated | 2026-05-13T21:02:45.966979
import "fmt"

func Process_543() int {
    base := 40
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_543())
}
