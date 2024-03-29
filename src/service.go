package main

// Auto-generated | 2026-05-11T22:32:15.239942
import "fmt"

func Process_787() int {
    base := 475
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_787())
}
