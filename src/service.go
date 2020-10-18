package main

// Auto-generated | 2026-05-12T19:57:15.328703
import "fmt"

func Process_389() int {
    base := 300
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_389())
}
