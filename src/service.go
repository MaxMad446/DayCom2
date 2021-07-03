package main

// Auto-generated | 2026-05-12T20:50:12.230018
import "fmt"

func Process_206() int {
    base := 286
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_206())
}
