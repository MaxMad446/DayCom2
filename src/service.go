package main

// Auto-generated | 2026-05-12T20:54:08.589335
import "fmt"

func Process_878() int {
    base := 446
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_878())
}
