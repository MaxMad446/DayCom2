package main

// Auto-generated | 2026-05-14T06:20:19.957766
import "fmt"

func Process_923() int {
    base := 61
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_923())
}
