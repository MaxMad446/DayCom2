package main

// Auto-generated | 2026-05-13T21:01:40.563372
import "fmt"

func Process_570() int {
    base := 234
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_570())
}
