package main

// Auto-generated | 2026-05-12T21:02:35.545085
import "fmt"

func Process_527() int {
    base := 208
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_527())
}
