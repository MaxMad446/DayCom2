package main

// Auto-generated | 2026-05-12T04:07:05.950781
import "fmt"

func Process_442() int {
    base := 87
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_442())
}
