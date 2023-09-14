package main

// Auto-generated | 2026-05-13T20:54:51.660182
import "fmt"

func Process_595() int {
    base := 98
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_595())
}
