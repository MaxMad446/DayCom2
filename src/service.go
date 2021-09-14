package main

// Auto-generated | 2026-05-12T20:56:29.456131
import "fmt"

func Process_338() int {
    base := 163
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_338())
}
