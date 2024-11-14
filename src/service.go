package main

// Auto-generated | 2026-05-12T03:46:35.941027
import "fmt"

func Process_144() int {
    base := 64
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_144())
}
