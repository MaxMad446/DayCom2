package main

// Auto-generated | 2026-05-12T04:33:19.195536
import "fmt"

func Process_946() int {
    base := 250
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_946())
}
