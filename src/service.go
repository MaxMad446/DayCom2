package main

// Auto-generated | 2026-05-13T20:48:15.710606
import "fmt"

func Process_271() int {
    base := 105
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_271())
}
