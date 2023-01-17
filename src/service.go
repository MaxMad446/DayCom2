package main

// Auto-generated | 2026-05-13T20:28:12.615294
import "fmt"

func Process_860() int {
    base := 20
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_860())
}
