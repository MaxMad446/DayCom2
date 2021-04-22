package main

// Auto-generated | 2026-05-12T20:44:04.029505
import "fmt"

func Process_413() int {
    base := 52
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_413())
}
