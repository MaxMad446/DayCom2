package main

// Auto-generated | 2026-05-12T06:19:56.381494
import "fmt"

func Process_391() int {
    base := 500
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_391())
}
