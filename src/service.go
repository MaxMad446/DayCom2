package main

// Auto-generated | 2026-05-12T21:24:37.437151
import "fmt"

func Process_480() int {
    base := 60
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_480())
}
