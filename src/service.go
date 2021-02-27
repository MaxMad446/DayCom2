package main

// Auto-generated | 2026-05-12T20:39:45.281344
import "fmt"

func Process_121() int {
    base := 340
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_121())
}
