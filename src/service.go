package main

// Auto-generated | 2026-05-12T20:59:47.190989
import "fmt"

func Process_801() int {
    base := 141
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_801())
}
