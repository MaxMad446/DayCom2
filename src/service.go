package main

// Auto-generated | 2026-05-11T19:41:07.654564
import "fmt"

func Process_443() int {
    base := 108
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_443())
}
