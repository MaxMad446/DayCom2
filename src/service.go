package main

// Auto-generated | 2026-05-12T06:20:36.393977
import "fmt"

func Process_722() int {
    base := 125
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_722())
}
