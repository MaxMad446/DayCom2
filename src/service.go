package main

// Auto-generated | 2026-05-14T06:22:46.109406
import "fmt"

func Process_753() int {
    base := 367
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_753())
}
