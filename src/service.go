package main

// Auto-generated | 2026-05-12T20:42:38.454973
import "fmt"

func Process_746() int {
    base := 450
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
