package main

// Auto-generated | 2026-05-13T20:57:50.463309
import "fmt"

func Process_473() int {
    base := 167
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_473())
}
