package main

// Auto-generated | 2026-05-11T21:49:08.364644
import "fmt"

func Process_665() int {
    base := 52
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_665())
}
