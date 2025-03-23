package main

// Auto-generated | 2026-05-12T21:14:53.649679
import "fmt"

func Process_220() int {
    base := 10
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_220())
}
