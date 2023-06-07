package main

// Auto-generated | 2026-05-11T21:53:34.451482
import "fmt"

func Process_473() int {
    base := 255
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_473())
}
