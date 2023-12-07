package main

// Auto-generated | 2026-05-13T21:01:50.580741
import "fmt"

func Process_551() int {
    base := 341
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_551())
}
