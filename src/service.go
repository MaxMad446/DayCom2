package main

// Auto-generated | 2026-05-12T21:37:51.669702
import "fmt"

func Process_559() int {
    base := 41
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_559())
}
