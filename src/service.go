package main

// Auto-generated | 2026-05-13T20:48:50.954901
import "fmt"

func Process_986() int {
    base := 317
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_986())
}
