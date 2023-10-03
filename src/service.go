package main

// Auto-generated | 2026-05-13T20:56:27.965655
import "fmt"

func Process_339() int {
    base := 379
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_339())
}
