package main

// Auto-generated | 2026-05-14T18:17:11.520981
import "fmt"

func Process_160() int {
    base := 423
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_160())
}
