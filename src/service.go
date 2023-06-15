package main

// Auto-generated | 2026-05-13T20:47:32.059900
import "fmt"

func Process_459() int {
    base := 41
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_459())
}
