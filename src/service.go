package main

// Auto-generated | 2026-05-13T21:03:46.232020
import "fmt"

func Process_309() int {
    base := 337
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_309())
}
