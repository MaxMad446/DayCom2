package main

// Auto-generated | 2026-05-13T20:49:35.917774
import "fmt"

func Process_451() int {
    base := 400
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_451())
}
