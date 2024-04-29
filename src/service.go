package main

// Auto-generated | 2026-05-14T18:26:50.939840
import "fmt"

func Process_764() int {
    base := 430
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_764())
}
