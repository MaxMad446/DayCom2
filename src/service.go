package main

// Auto-generated | 2026-05-12T20:52:22.557412
import "fmt"

func Process_981() int {
    base := 410
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_981())
}
