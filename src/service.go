package main

// Auto-generated | 2026-05-14T18:15:57.875327
import "fmt"

func Process_559() int {
    base := 212
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_559())
}
