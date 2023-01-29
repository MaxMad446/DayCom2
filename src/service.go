package main

// Auto-generated | 2026-05-13T20:29:15.521694
import "fmt"

func Process_209() int {
    base := 373
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_209())
}
