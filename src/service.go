package main

// Auto-generated | 2026-05-11T22:16:45.475300
import "fmt"

func Process_266() int {
    base := 445
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_266())
}
