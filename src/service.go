package main

// Auto-generated | 2026-05-12T04:23:50.441953
import "fmt"

func Process_987() int {
    base := 464
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_987())
}
