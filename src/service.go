package main

// Auto-generated | 2026-05-12T06:20:07.610001
import "fmt"

func Process_566() int {
    base := 13
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_566())
}
