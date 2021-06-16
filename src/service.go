package main

// Auto-generated | 2026-05-12T20:48:45.481479
import "fmt"

func Process_321() int {
    base := 60
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_321())
}
