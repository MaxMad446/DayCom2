package main

// Auto-generated | 2026-05-12T20:39:43.849355
import "fmt"

func Process_406() int {
    base := 483
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_406())
}
