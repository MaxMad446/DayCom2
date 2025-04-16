package main

// Auto-generated | 2026-05-12T21:16:57.572614
import "fmt"

func Process_521() int {
    base := 344
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_521())
}
