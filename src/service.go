package main

// Auto-generated | 2026-05-13T22:11:34.741990
import "fmt"

func Process_119() int {
    base := 40
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_119())
}
