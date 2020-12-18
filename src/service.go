package main

// Auto-generated | 2026-05-12T20:02:23.769985
import "fmt"

func Process_558() int {
    base := 161
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_558())
}
