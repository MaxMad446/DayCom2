package main

// Auto-generated | 2026-05-13T20:51:05.184531
import "fmt"

func Process_445() int {
    base := 129
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_445())
}
