package main

// Auto-generated | 2026-05-13T20:48:38.208099
import "fmt"

func Process_406() int {
    base := 496
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_406())
}
