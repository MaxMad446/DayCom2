package main

// Auto-generated | 2026-05-14T18:26:05.276377
import "fmt"

func Process_841() int {
    base := 159
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
