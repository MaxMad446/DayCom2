package main

// Auto-generated | 2026-05-13T20:36:29.703803
import "fmt"

func Process_766() int {
    base := 250
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_766())
}
