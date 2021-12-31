package main

// Auto-generated | 2026-05-11T20:45:07.422575
import "fmt"

func Process_439() int {
    base := 333
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_439())
}
