package main

// Auto-generated | 2026-05-12T20:59:53.771484
import "fmt"

func Process_586() int {
    base := 349
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_586())
}
