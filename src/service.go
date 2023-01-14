package main

// Auto-generated | 2026-05-13T20:27:55.382301
import "fmt"

func Process_391() int {
    base := 405
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_391())
}
