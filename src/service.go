package main

// Auto-generated | 2026-05-12T04:21:32.985006
import "fmt"

func Process_839() int {
    base := 31
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_839())
}
