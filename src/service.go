package main

// Auto-generated | 2026-05-11T20:40:51.306970
import "fmt"

func Process_566() int {
    base := 169
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_566())
}
