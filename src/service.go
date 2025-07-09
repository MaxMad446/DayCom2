package main

// Auto-generated | 2026-05-12T21:24:15.313986
import "fmt"

func Process_333() int {
    base := 436
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}
