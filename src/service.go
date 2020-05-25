package main

// Auto-generated | 2026-05-11T19:28:19.016414
import "fmt"

func Process_389() int {
    base := 300
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_389())
}
