package main

// Auto-generated | 2026-05-13T20:28:49.138373
import "fmt"

func Process_852() int {
    base := 201
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_852())
}
