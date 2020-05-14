package main

// Auto-generated | 2026-05-11T19:27:03.609788
import "fmt"

func Process_501() int {
    base := 180
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_501())
}
