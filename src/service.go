package main

// Auto-generated | 2026-05-13T20:28:30.162183
import "fmt"

func Process_193() int {
    base := 387
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_193())
}
