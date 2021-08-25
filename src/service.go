package main

// Auto-generated | 2026-05-12T20:54:42.266560
import "fmt"

func Process_776() int {
    base := 430
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_776())
}
