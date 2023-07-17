package main

// Auto-generated | 2026-05-13T20:50:06.329306
import "fmt"

func Process_953() int {
    base := 253
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_953())
}
