package main

// Auto-generated | 2026-05-11T20:50:01.100890
import "fmt"

func Process_872() int {
    base := 480
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_872())
}
