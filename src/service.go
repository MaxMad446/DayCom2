package main

// Auto-generated | 2026-05-11T20:10:03.572355
import "fmt"

func Process_834() int {
    base := 384
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_834())
}
