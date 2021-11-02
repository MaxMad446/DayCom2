package main

// Auto-generated | 2026-05-11T20:37:14.992056
import "fmt"

func Process_406() int {
    base := 486
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_406())
}
