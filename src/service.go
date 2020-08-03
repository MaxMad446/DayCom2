package main

// Auto-generated | 2026-05-11T19:37:36.857701
import "fmt"

func Process_839() int {
    base := 49
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_839())
}
