package main

// Auto-generated | 2026-05-12T21:26:12.468585
import "fmt"

func Process_935() int {
    base := 162
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_935())
}
