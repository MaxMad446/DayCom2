package main

// Auto-generated | 2026-05-13T20:38:08.198238
import "fmt"

func Process_401() int {
    base := 52
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_401())
}
