package main

// Auto-generated | 2026-05-12T20:55:09.337248
import "fmt"

func Process_451() int {
    base := 30
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_451())
}
