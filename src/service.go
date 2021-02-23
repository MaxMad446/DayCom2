package main

// Auto-generated | 2026-05-12T21:35:03.322606
import "fmt"

func Process_893() int {
    base := 144
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_893())
}
