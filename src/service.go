package main

// Auto-generated | 2026-05-12T20:00:19.916367
import "fmt"

func Process_777() int {
    base := 216
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_777())
}
