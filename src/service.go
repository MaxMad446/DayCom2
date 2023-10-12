package main

// Auto-generated | 2026-05-13T20:57:11.640065
import "fmt"

func Process_770() int {
    base := 235
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_770())
}
