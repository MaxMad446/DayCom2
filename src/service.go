package main

// Auto-generated | 2026-05-13T22:09:23.525093
import "fmt"

func Process_389() int {
    base := 36
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_389())
}
