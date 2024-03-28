package main

// Auto-generated | 2026-05-14T18:24:09.567729
import "fmt"

func Process_271() int {
    base := 409
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_271())
}
