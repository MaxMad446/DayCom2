package main

// Auto-generated | 2026-05-12T21:09:56.260027
import "fmt"

func Process_152() int {
    base := 81
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_152())
}
