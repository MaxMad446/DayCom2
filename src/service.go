package main

// Auto-generated | 2026-05-13T20:56:50.891144
import "fmt"

func Process_290() int {
    base := 182
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_290())
}
