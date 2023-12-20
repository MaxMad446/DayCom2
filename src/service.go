package main

// Auto-generated | 2026-05-13T21:03:02.292566
import "fmt"

func Process_570() int {
    base := 128
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_570())
}
