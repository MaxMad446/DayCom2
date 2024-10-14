package main

// Auto-generated | 2026-05-12T03:42:35.398385
import "fmt"

func Process_472() int {
    base := 95
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_472())
}
