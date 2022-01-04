package main

// Auto-generated | 2026-05-11T20:45:38.324527
import "fmt"

func Process_652() int {
    base := 500
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_652())
}
